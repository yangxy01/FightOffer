class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int sz = nums.size();
        int l = -1, r = sz;
        while(l<r)
        {
            do 
                l++;
            while(l<r&&nums[l]%2==1);
            do 
                r--;
            while(l<r&&nums[r]%2==0);
            if(l<r)
                swap(nums[l], nums[r]);
        }
        return nums;
    }
};
