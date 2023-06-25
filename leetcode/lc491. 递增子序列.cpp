class Solution {
public:
    vector<vector<int>> res;
    
    void backTrack(vector<int>& nums, vector<int>& path, int stratIndex)
    {
        if(path.size()>1)
            res.push_back(path);
        if(stratIndex==nums.size())
        {
            return;
        }
        unordered_set<int> uset;
        for(int i=stratIndex;i<nums.size();i++)
        {
            if(uset.find(nums[i])!=uset.end())
                continue;
            if(path.size()&&nums[i]<path.back())
                continue;
            uset.insert(nums[i]);
            path.push_back(nums[i]);
            backTrack(nums, path, i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        if(nums.size()==0) return res;
        //sort(nums.begin(), nums.end());
        vector<int> path;
        backTrack(nums, path, 0);
        return res;
    }
};
