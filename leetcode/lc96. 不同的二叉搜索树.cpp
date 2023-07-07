class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                int l = dp[j-1];
                int r = dp[i-j];
                dp[i]+=l*r;
            }
        }
        return dp[n];
    }
};
