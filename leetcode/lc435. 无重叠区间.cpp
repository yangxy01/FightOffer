struct cmp{
    bool operator()(vector<int>& l, vector<int>& r)
    {
        return l[0]<r[0];
    }
};

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;
        sort(intervals.begin(), intervals.end(), cmp());
        int count=1;
        int end = intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
                end = min(end, intervals[i][1]);
            else
            {
                count++;
                end = intervals[i][1];
            }
        }
        return intervals.size()-count;
    }
};
