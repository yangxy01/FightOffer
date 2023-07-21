class Solution {
public:
    vector<double> dicesProbability(int n) {
        vector<vector<double>> dp(n+1, vector<double>(6*n+1, 0));
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=6*i;j++)
            {
                if(i==1)
                    dp[i][j] = 1/6.0;
                for(int k=1;k<=6&&j-k>0;k++)
                    dp[i][j]+=dp[i-1][j-k]*1/6.0;
            }
        }
        vector<double> res;
        for(int i=n;i<=6*n;i++)
            res.push_back(dp[n][i]);
        return res;
    }
};
