class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(), m=text2.size();
        vector<int> dp(m+1, 0);
        for(int i=1;i<=n;i++)
        {
            int prev = 0, cur;
            for(int j=1;j<=m;j++)
            {
                cur = dp[j];
                if(text1[i-1]==text2[j-1])
                    dp[j] = prev+1;
                else
                    dp[j] = max(dp[j], dp[j-1]);
                prev = cur;
            }
        }
        return dp[m];
    }
};
