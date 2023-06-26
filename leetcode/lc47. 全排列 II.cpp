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
            if(visited[i]) continue; // ���visited��Ϊ�˱��ⲻͬ��ѡ��ͬһ��λ�õ���
            // ����visited[i-1]==false�Ǳ�ʾi-1λ�õ����������ϲ�̳й����ģ�����ͬһ����ֶ�Σ���ȥ��
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
