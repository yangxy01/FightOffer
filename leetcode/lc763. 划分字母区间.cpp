struct cmp {
    bool operator()(vector<int>& l, vector<int>& r)
    {
        return l[0] < r[0];
    }
};
const int inf = 0x3f3f3f3f;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        if (s.size() == 0) return res;
        vector<vector<int>> v(26, vector<int>(2, inf));
        for (int i = 0; i < s.size(); i++)
        {
            int n = s[i] - 'a';
            if (v[n][0] == inf)
            {
                v[n][0] = i;
                v[n][1] = i;
            }
            else
                v[n][1] = i;
        }
        sort(v.begin(), v.end(), cmp());
        int end = v[0][1];
        int count = 1, last = -1;
        for (int i = 1; i < 26; i++)
        {
            if (v[i][0] == inf)
            {
                break;
            }
            if (v[i][0] < end)
            {
                end = max(end, v[i][1]);
            }
            else
            {
                count++;
                res.push_back(end - last);
                last = end;
                end = v[i][1];
            }
        }
        res.push_back(end - last);
        return res;
    }
};
