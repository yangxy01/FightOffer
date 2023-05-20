class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> uset1, uset2;
        unordered_map<int, int> umap1, umap2;
        for(auto& x:nums1)
        {
            umap1[x]++;
            uset1.insert(x);
        }
        for(auto& x:nums2)
        {
            umap2[x]++;
            if(uset1.count(x))
                uset2.insert(x);
        }
        for(auto& x:uset2)
        {
            int num = min(umap1[x], umap2[x]);
            while(num--)
                res.push_back(x);
        }
        return res;
    }
};
