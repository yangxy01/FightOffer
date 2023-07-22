class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size(), n = dungeon[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,INT_MAX));
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1&&j==n-1)
                {
                    if(dungeon[i][j]<0)
                        dp[i][j]=-1*dungeon[i][j]+1;
                    else
                        dp[i][j]=1;
                    continue;
                }
                int minv = min(dp[i+1][j], dp[i][j+1]);
                dp[i][j]=max(minv-dungeon[i][j], 1);
            }
        }
        return dp[0][0];
    }
};
