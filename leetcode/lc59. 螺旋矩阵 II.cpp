class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int di[] = { 0,1,0,-1 }, dj[] = { 1,0,-1,0 };
        int count = 1, direc = 0;
        vector<vector<int>> res(n, vector<int>(n, -1));
        int i = 0, j = -1;
        while (count <= n * n)
        {
            int newi = i + di[direc];
            int newj = j + dj[direc];
            if (newi >= 0 && newi < n && newj >= 0 && newj < n && res[newi][newj] == -1)
            {
                i = newi;
                j = newj;
            }
            else
            {
                direc++;
                direc %= 4;
                i = i + di[direc];
                j = j + dj[direc];
            }
            res[i][j] = count;
            count++;
        }
        //  for(int i=0;i<n;i++)
        //  {
        //      for(int j=0;j<n;j++)
        //          cout<<res[i][j]<<" ";
        //      cout<<endl;
        //  }
        return res;
    }
};
