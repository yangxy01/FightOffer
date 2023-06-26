class Solution {
public:
    vector<vector<int>> res;
    void bcakTrace(vector<int>& path, vector<int>& visited, vector<int>& nums, int count)
    {
        cout<<endl;
        if(count==nums.size())
        {
            res.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]!=0) continue;
            visited[i]=1;
            path.push_back(nums[i]);
            bcakTrace(path, visited, nums, count+1);     
            path.pop_back();
            visited[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> visited(nums.size(), 0);
        vector<int> path;
        bcakTrace(path, visited, nums, 0);
        return res;
    }
};
