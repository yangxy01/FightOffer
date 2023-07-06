class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums[0]<nums[r]) return nums[l];
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


