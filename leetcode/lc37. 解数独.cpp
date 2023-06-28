int grid[10][10];
int row[10][10];
int col[10][10];

class Solution {
    int GetNum(int i, int j)
    {
        int gridNum = 0;
        if (i / 3 == 0)
        {
            if (j / 3 == 0)
                gridNum = 0;
            else if (j / 3 == 1)
                gridNum = 1;
            else
                gridNum = 2;
        }
        else if (i / 3 == 1)
        {
            if (j / 3 == 0)
                gridNum = 3;
            else if (j / 3 == 1)
                gridNum = 4;
            else
                gridNum = 5;
        }
        else
        {
            if (j / 3 == 0)
                gridNum = 6;
            else if (j / 3 == 1)
                gridNum = 7;
            else
                gridNum = 8;
        }
        return gridNum;
    }
    vector<vector<char>> res;
public:
    void bfs(vector<vector<char>>& board, int x, int y, bool& state)
    {
        if (state) return;
        if (y == board.size())
        {
            y = 0;
            x++;
        }
        if (x == board.size())
        {
            state = true;
            res = board;
            return;
        }
        int gridNum = GetNum(x, y);
        if (board[x][y] != '.')
        {
            int i = board[x][y] - '0';
            grid[gridNum][i] = row[x][i] = col[y][i] = 1;
            bfs(board, x, y + 1, state);
        }
        else
        {
            for (int i = 1; i <= 9; i++)
            {
                if (grid[gridNum][i] || row[x][i] || col[y][i])
                    continue;
                grid[gridNum][i] = row[x][i] = col[y][i] = 1;
                board[x][y] = i + '0';
                bfs(board, x, y + 1, state);
                board[x][y] = '.';
                grid[gridNum][i] = row[x][i] = col[y][i] = 0;
            }
        }

    }
    void solveSudoku(vector<vector<char>>& board) {
        memset(grid, 0, sizeof(grid));
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        bool state = false;
        for(int i=0;i<board.size();i++)
            for (int j = 0; j < board.size(); j++)
                if (board[i][j] != '.')
                {
                    int gridNum = GetNum(i, j);
                    int x = board[i][j] - '0';
                    grid[gridNum][x] = row[i][x] = col[j][x] = 1;
                }
        bfs(board, 0, 0, state);
        board = res;
    }
};
