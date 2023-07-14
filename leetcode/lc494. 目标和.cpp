class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int x = (sum+target)/2;
        if((sum+target)%2==1) return 0;
        if(x<0) return 0;
        vector<int> dp(1010, 0);
        dp[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=x;j>=nums[i];j--)
                dp[j]+=dp[j-nums[i]];
        }
        return dp[x];
    }
};
