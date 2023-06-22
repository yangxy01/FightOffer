class Solution {
public:
    vector<vector<int>> res;
    void backTrace(vector<int>& candidates, int acc, int& target, vector<int>& path, int startIndex)
    {
        if(acc>=target)
        {
            if(acc==target)
                res.push_back(path);
            return;
        }
        for(int i=startIndex;i<candidates.size();i++)
        {
            acc+=candidates[i];
            path.push_back(candidates[i]);
            backTrace(candidates, acc, target, path, i);
            path.pop_back();
            acc-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size()==0) return res;
        vector<int> path;
        int acc = 0;
        int startIndex=0;
        backTrace(candidates, acc, target, path, startIndex);
        return res;
    }
};
