class Solution {
public:
    vector<vector<int>> res;
    void backTrace(vector<int>& nums, vector<int>& state, int num)
    {
        if(num==nums.size())
        {
            vector<int> vec;
            for(int i=0;i<nums.size();i++)
                if(state[i]==1)
                    vec.push_back(nums[i]);
            res.push_back(vec);
            return;
        }
        backTrace(nums, state, num+1);
        state[num]*=-1;
        backTrace(nums, state, num+1);
        state[num]*=-1;
    }
    vector<vector<int>> subsets(vector<int>& nums) {  
        // res.push_back(vector<int>());
        if(nums.size()==0) return res;
        int sz = nums.size();
        vector<int> state(sz, -1);
        backTrace(nums, state, 0);
        return res;
    }
};
