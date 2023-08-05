class Solution {
    int bs(vector<int>& nums, int target, int l, int r)
    {
        while(l<r)
        {
            int mid = l+r>>1;
            if(target<=nums[mid]) r=mid;
            else l=mid+1;
        }
        if(nums[l]==target) return l;
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        if(nums.back()<nums[0])
        {
            int l=0,r=nums.size()-1;
            while(l<r)
            {
                int mid = l+r>>1;
                if(nums[mid]<=nums.back()) r=mid;
                else l=mid+1;
            }
            if(target<=nums.back()) return bs(nums, target, l, nums.size()-1);
            return bs(nums, target, 0, l-1);
        }
        else
            return bs(nums, target, 0, nums.size()-1);
    }
};
