class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=0x3f3f3f3f;
        int i=0,j=0;
        int sz=nums.size();
        int sum = 0;
        while(j<sz)
        {
            sum+=nums[j];
            while(sum>=target)
            {
                res=min(res, j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(res==0x3f3f3f3f)
            return 0;
        else
            return res;
    }
};


