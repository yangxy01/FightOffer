class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> uset1, uset2;
        for(auto& x: nums1)
            uset1.insert(x);
        for(auto& x: nums2)
            if(uset1.count(x))
                uset2.insert(x);
        for(auto& x: uset2)
            res.push_back(x);
        return res;
    }
};
