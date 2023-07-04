class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //if(nums.size()==1) return !nums[0];
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r)
        {
            int mid = (l+r)>>1;
            if(nums[mid]>mid)
                r=mid;
            else
                l=mid+1;
        }
        if(nums[l]<=l)
            return n;
        return l;
    }
};
