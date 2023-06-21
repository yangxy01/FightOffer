class Solution {
public:
    vector<vector<int>> res;
    int target;
    void backTrack(int startIndex, vector<int>& path, int acc, int k)
    {
        if(k==0)
        {
            if(acc == target)
                res.push_back(path);
            return;
        }
        for(int i=startIndex;i<=9;i++)
        {
            path.push_back(i);
            backTrack(i+1, path, acc+i, k-1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        target = n;
        backTrack(1, path, 0, k);
        return res;
    }
};
