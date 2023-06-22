class Solution {
public:
    vector<vector<int>> res;
    void backTrace(vector<int>& candidates, int target, int startIndex, vector<int>& path, int acc)
    {
        if(acc>=target)
        {
            if(acc==target)
                res.push_back(path);
            return;
        }
        for(int i=startIndex;i<candidates.size()&&(acc+candidates[i]<=target);i++)
        {
            if(i>startIndex&&candidates[i]==candidates[i-1])
                continue;
            path.push_back(candidates[i]);
            acc+=candidates[i];
            backTrace(candidates, target, i+1, path, acc);
            acc-=candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int acc = 0;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backTrace(candidates, target, 0, path, 0);
        return res;
    }
};
