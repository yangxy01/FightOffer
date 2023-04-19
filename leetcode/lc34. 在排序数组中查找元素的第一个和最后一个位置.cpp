class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
        {
            vector<int> res;
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int l = 0, r=nums.size()-1;
        vector<int> res;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]>=target)
                r=mid;
            else
                l=mid+1;
        }
        if(nums[l]==target)
        {
            res.push_back(l);
            l = 0, r=nums.size()-1;
            while(l<r)
            {
                int mid=l+r+1>>1;
                if(nums[mid]<=target)
                    l=mid;
                else
                    r=mid-1;
            }
            res.push_back(l);
        }
        else
        {
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }
};
