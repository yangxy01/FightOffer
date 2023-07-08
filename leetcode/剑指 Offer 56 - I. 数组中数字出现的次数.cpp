class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(auto y: nums)
            x^=y;
        int pos = 0;
        while(x)
        {
            if(x&1==1)
                break;
            pos++;
            x>>=1;
        }
        int res1 = 0, res2 = 0;
        for(auto y: nums)
        {
            if((y>>pos)&1==1)
                res1^=y;
            else
                res2^=y;
        }
        return {res1, res2};
    }
};
