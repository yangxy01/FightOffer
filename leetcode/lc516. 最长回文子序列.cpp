class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(j-i<1) dp[i][j]=1; // ֻ�е���Ԫ��
                else if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1]+2;
                else if(s[i]!=s[j]) dp[i][j]=max(dp[i+1][j], dp[i][j-1]);
            }
        }
        return dp[0][n-1]; // ����i��������ߣ�j�������ұ�
    }
};
