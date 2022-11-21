#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<utility>

using namespace std;

class Solution {
public:
    int m = 0, n = 0;
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        if (matrix.size() == 0 || matrix[0].size() == 0)return res;
        vector<pair<int, int>> move;
        move.push_back({ 0,1 });
        move.push_back({ 1,0 });
        move.push_back({ 0,-1 });
        move.push_back({ -1,0 });
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int i = 0, x = 0, y = 0;
        while (1)
        {
            auto pos = move[i];
            auto sz = res.size();
            while (isOK(x, y, visited))
            {
                res.push_back(matrix[x][y]);
                visited[x][y] = true;
                x += pos.first;
                y += pos.second;
            }
            x -= pos.first;
            y -= pos.second;
            i++;
            i %= 4;
            if (sz == res.size())
                break;
            pos = move[i];
            x += pos.first;
            y += pos.second;
        }
        return res;
    }

    bool isOK(int x, int y, vector<vector<bool>>& visited)
    {
        if (x < 0 || x >= m || y < 0 || y >= n || visited[x][y])
            return false;
        return true;
    }
};

int main()
{
    Solution S;
    int nums[] = { 1,2,3,4,8,12,11,10,9,5,6,7 };
    vector<vector<int>> data(4, vector<int>(4, 0));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            data[i][j] = nums[i*4+j];
    auto ret = S.printMatrix(data);
}