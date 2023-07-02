struct cmp{
    bool operator()(vector<int>& l, vector<int>& r)
    {
        return l[0]<r[0];
    }
};
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        sort(points.begin(), points.end(), cmp());
        int end = points[0][1];
        int res = 1;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=end)
                end = min(end, points[i][1]);
            else
            {
                res++;
                end = points[i][1];
            }
        }
        return res;
    }
};
