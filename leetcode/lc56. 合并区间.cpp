struct cmp{
    bool operator()(vector<int>& l, vector<int>& r)
    {
        return l[0]<r[0];
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0) return res;
        sort(intervals.begin(), intervals.end(), cmp());
        int end = intervals[0][1];
        int start = intervals[0][0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=end)
                end=max(end, intervals[i][1]);
            else
            {
                res.push_back(vector<int>{start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        res.push_back(vector<int>{start, end});
        return res;
    }
};
