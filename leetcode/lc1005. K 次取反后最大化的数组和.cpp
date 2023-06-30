struct myCmp
{
    bool operator()(int a, int b)
    {
        return abs(a)<abs(b);
    }
};

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), myCmp());
        int total = 0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<0&&k>0)
            {
                k--;
                nums[i]*=-1;
            }
        }
        if(k%2==1) nums[0]*=-1;
        for(auto x: nums)
            total+=x;
        return total;
    }
};
