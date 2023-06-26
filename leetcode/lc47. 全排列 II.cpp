class Solution {
public:
    vector<vector<int>> res;
    void backTrace(vector<int>& nums, vector<int>& path, vector<int>& visited)
    {
        if(path.size()==nums.size())
        {
            res.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]) continue; // 这个visited是为了避免不同层选到同一个位置的数
            // 这里visited[i-1]==false是表示i-1位置的数并不是上层继承过来的，而是同一层出现多次，可去重
            if(i>0&&nums[i]==nums[i-1]&&visited[i-1]==false) continue;
            path.push_back(nums[i]);
            visited[i]=true;
            backTrace(nums, path, visited);
            visited[i]=false;
            path.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> visited(nums.size(), false);
        vector<int> path;
        sort(nums.begin(), nums.end());
        backTrace(nums, path, visited);
        return res;
    }
};
