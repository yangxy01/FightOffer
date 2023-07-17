class Solution {
    void backTrace(string& s, vector<string>& res, string path)
    {
        if(path.size()==s.size())
        {
            res.push_back(path);
            return;
        }
        unordered_set<char> us;
        for(int i=0;i<s.size();i++)
        {
            // if(us.insert(s[i])==us.end())
            //     continue;
            if(i>0&&s[i]==s[i-1]&&s[i-1]!='#')
                continue;
            if(s[i]!='#')
            {
                char ch = s[i];
                s[i]='#';
                backTrace(s, res, path+ch);
                s[i] = ch;
            }
        }
    }
public:
    vector<string> permutation(string s) {
        vector<string> res;
        if(s.size()==0) return res;
        sort(s.begin(), s.end());
        string path;
        backTrace(s, res, path);
        return res;
    }
};
