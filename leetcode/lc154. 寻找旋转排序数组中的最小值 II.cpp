class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r&&nums[r]==nums[r-1]) r--; // 删除右部分横线部分，则右部分必定小于左部分，形成单调性，至少留一个
        if(nums[l]<nums[r]) return nums[l]; // 此时等价于没旋转，直接返回第一个元素
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]<nums[0])
                r=mid;
            else
                l=mid+1;
        }
        return nums[l];
    }
};
