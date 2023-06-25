class Solution {
public:
    vector<vector<int>> res;
    void traceBack(vector<int>& path, int startIndex, vector<int>& nums)
    {
        res.push_back(path);
        if(startIndex>=nums.size())
        {
            return;
        }
        int i=startIndex;
        while(i<nums.size())
        {
            path.push_back(nums[i]);
            traceBack(path, i+1, nums);
            path.pop_back();
            do
            {
                i++;
            }while(i<nums.size()&&nums[i]==nums[i-1]);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if(nums.size()==0) return res;
        vector<int> path;
        sort(nums.begin(), nums.end());
        traceBack(path, 0, nums);
        return res;
    }
};
