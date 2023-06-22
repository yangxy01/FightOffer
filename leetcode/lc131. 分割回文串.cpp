class Solution {
public:
    vector<vector<string>> res;
    bool state(string&s, int l, int r)
    {
        if(l>r)
            return false;
        int i=l,j=r;
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    void backTrace(string& s, int startIndex, vector<string>& path)
    {
        if(startIndex>=s.size())
        {
            res.push_back(path);
            return;
        }
        for(int i=startIndex;i<s.size();i++)
        {
            if(state(s, startIndex, i))
            {
                path.push_back(s.substr(startIndex, i-startIndex+1));
                backTrace(s, i+1, path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        backTrace(s, 0, path);
        return res;
    }
};
