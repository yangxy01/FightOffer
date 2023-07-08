class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i=31;i>=0;i--)
        {
            int count=0;
            for(auto& x: nums)
            {
                if((x>>i&1)==1)
                    count++;
            }
            res*=2;
            if(count%3==1)
                res+=1;
        }
        return res;
    }
};
