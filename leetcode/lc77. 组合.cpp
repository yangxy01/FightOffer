class Solution {
public:
    vector<int> nums;
    vector<vector<int>> res;
    void backTrack(vector<int> path, int startIndex, int k)
    {
        if(k==0)
        {
            res.push_back(path);
            return;
        }
        for(int i=startIndex;i<nums.size();i++)
        {
            path.push_back(nums[i]);
            backTrack(path, i+1, k-1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        vector<int> path;
        backTrack(path, 0, k);
        return res;
    }
};
