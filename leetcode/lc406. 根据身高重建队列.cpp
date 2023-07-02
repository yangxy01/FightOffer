struct cmp{
    bool operator()(vector<int>& lhs, vector<int>& rhs)
    {
        return lhs[0]<rhs[0];
    }
};
class Solution {
public:
    void show(vector<vector<int>>& people)
    {
        for(auto x:people)
            if(x.size())
                cout<<x[0]<<" "<<x[1]<<"; ";
        cout<<endl;
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res(people.size());
        sort(people.begin(), people.end(), cmp());
        int sz = people.size();
        for(auto& x:people)
        {
            int num = x[1];
            int i=0;
            while(num>0)
            {
                if(res[i].empty()||res[i][0]>=x[0]) //  // res为最终结果数组，x为当前这个人信息
                    num--;
                i++;
            }
            while(!res[i].empty())
                i++;
            res[i] = x;
        }
        return res;
    }
};
