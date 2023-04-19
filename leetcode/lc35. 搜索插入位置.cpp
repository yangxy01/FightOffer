// 35. ËÑË÷²åÈëÎ»ÖÃ https://leetcode.cn/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(nums[mid]<=target)
                l=mid;
            else
                r=mid-1;
        }
        if(nums[l]==target)
            return l;
        else if(nums[l]>target)
            return 0;
        else
            return l+1;
    }
};
