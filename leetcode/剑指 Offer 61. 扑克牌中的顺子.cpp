class Solution {
public:
    bool isStraight(vector<int>& nums) {
        unordered_set<int> us;
        int mi = 20, ma = -1;
        for(auto x:nums)
        {
            if(x==0)
                continue;
            if(us.insert(x).second==false)
                return false;
            ma=max(ma, x);
            mi=min(mi, x);
        }
        return ma-mi<5;
    }
};
