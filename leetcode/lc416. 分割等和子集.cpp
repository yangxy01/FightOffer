class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;
        for(auto x: nums)
            target+=x;
        if(target%2==1) return false;
        target/=2;
        vector<int> dp(target+1, 0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=target;j>=nums[i];j--)
                dp[j]=max(dp[j-nums[i]]+nums[i], dp[j]);
        }
        return dp[target]==target;
    }
};
