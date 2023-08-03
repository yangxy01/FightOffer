class Solution {
    void qs(vector<int>& nums, int l, int r, int k)
    {
        if(l>=r) return;
        int mid=nums[l+r>>1];
        int i=l-1,j=r+1;
        while(i<j)
        {
            do i++; while(nums[i]>mid);
            do j--; while(nums[j]<mid);
            if(i<j) swap(nums[i], nums[j]);
        }
        if(k<=j+1)
            qs(nums, l, j, k);
        else
            qs(nums, j+1, r, k);
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        qs(nums, 0, nums.size()-1, k);
        return nums[k-1];
    }
};
