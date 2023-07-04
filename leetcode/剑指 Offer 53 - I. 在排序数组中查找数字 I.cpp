class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        int n=nums.size();
        int l=0,r=n-1;
        int left=0,right=0;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]>=target)
                r=mid;
            else
                l=mid+1;
        }
        if(nums[l]!=target)
            return 0;
        else
            left=l;
        l=0,r=n-1;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(nums[mid]<=target)
                l=mid;
            else
                r=mid-1;
        }
        return l-left+1;
    }
};
