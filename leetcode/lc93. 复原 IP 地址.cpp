class Solution {
public:
    vector<string> res;
    bool satify(string& s)
    {
        if(s[0]=='0')
        {
            if(s.size()==1)
                return true;
            return false;
        }
        int sum=0;
        for (int i = 0; i < s.size(); i++)
        {
            sum *= 10;
            sum += s[i] - '0';
        }
        if(sum>=0&&sum<=255) 
        {
            return true;
        }
        return false;
    }
    void backTrace(string& s, int startIndex, int num, string path)
    {
        if(num>=3)
        {
            if(num==3)
            {
                string tmp = s.substr(startIndex);
                if(tmp.size()>3) return;
                if(satify(tmp))
                {
                    path+=tmp;
                    res.push_back(path);
                }
            }
            return;
        }
        for(int i=startIndex;i<s.size()-1&&i<startIndex+3;i++)
        {
            string tmp = s.substr(startIndex, i-startIndex+1);
            if(satify(tmp))
            {
                tmp+=".";
                backTrace(s, i+1, num+1, path+tmp);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        string path;
        backTrace(s, 0, 0, path);
        return res;
    }
};
