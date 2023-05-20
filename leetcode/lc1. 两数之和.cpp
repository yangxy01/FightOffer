class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int y=target-x;
            if(umap.find(y)!=umap.end())
            {
                res.push_back(i);
                res.push_back(umap[y]);
                return res;
            }
            else
                umap[x]=i;
        }
        return res;
    }
};
