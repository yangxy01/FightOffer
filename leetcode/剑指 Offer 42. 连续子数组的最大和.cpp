class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int prev = 0, cur = 0;
        int res = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            cur=max(nums[i], prev+nums[i]);
            res = max(res, cur);
            prev = cur;
        }            
        return res;
    }
};
