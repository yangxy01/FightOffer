class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // // 解法1
        // for(auto& x:nums)
        //     x*=x;
        // sort(nums.begin(), nums.end());
        // return nums;

        // 解法2
        int len = nums.size();
        vector<int> res(len, 0);
        int i=0,j=len-1;
        while(i<=j)
        {
            if(nums[i]*nums[i]<nums[j]*nums[j])
            {
                res[--len]=nums[j]*nums[j];
                j--;
            }
            else
            {
                res[--len]=nums[i]*nums[i];
                i++;
            }
        }
        return res;
    }
};
