class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int acc = 0;
        for(int i=0; i<nums.size();i++)
        {
            if(acc<0)
                acc = nums[i];
            else
                acc+=nums[i];
            res = max(res, acc);
        }
        return res;
    }
};
