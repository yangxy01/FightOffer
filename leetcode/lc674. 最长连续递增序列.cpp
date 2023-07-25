class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 1, count = 1;
        int prev = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>prev)
                count++;
            else
            {
                res = max(res, count);
                count = 1;
            }
            prev = nums[i];
        }
        res = max(res, count);
        return res;
    }
};
