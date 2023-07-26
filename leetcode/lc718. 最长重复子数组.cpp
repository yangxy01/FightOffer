class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), res = 0;
        // vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        vector<int> dp(n+1, 0);
        for(int i=1;i<=m;i++)
        {
            for(int j=n;j>=1;j--)
            {
                if(nums1[i-1]==nums2[j-1])
                    dp[j] = dp[j-1] + 1;
                else
                    dp[j] = 0;  // 注意这里不相等的时候要有赋0的操作
                res = max(res, dp[j]);
            }
        }
        return res;
    }
};
