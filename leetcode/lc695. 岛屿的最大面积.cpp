class Solution {
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int acc;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==1)
                {
                    acc = 0;
                    dfs(grid, i, j);
                    res = max(res, acc);
                }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int x, int y)
    {
        acc++;
        grid[x][y]=0;
        for(int i=0;i<4;i++)
        {
            int a=x+dx[i], b=y+dy[i];
            if(a>=0&&a<grid.size()&&b>=0&&b<grid[0].size()&&grid[a][b]==1)
                dfs(grid, a, b);
        }
    }
};
