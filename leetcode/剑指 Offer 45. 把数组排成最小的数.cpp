class Solution {
    bool less(int x, int y, vector<int>& nums)
    {
        string sx = to_string(x);
        string sy = to_string(y);
        return sx+sy<sy+sx;
    }
    void qs(int l, int r, vector<int>& nums)
    {
        if(l>=r) return;
        int i=l-1,j=r+1;
        int mid=nums[l+r>>1];
        while(i<j)
        {
            do i++;
            while(less(nums[i],mid,nums)); // -> nums[i]<mid
            do j--;
            while(less(mid,nums[j],nums)); // -> nums[j]>mid
            if(i<j)
                swap(nums[i], nums[j]);
        }
        qs(l,j,nums);
        qs(j+1,r,nums);
    }
public:
    string minNumber(vector<int>& nums) {
        qs(0, nums.size()-1, nums);
        string s;
        for(auto x:nums)
            s+=to_string(x);
        return s;
    }
};
