class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), i = 0;
        for(auto ch: t)
        {
            if(i==n)
                return true;
            if(s[i]==ch)
                i++;   
        }
        if(i==n)
            return true;
        return false;
    }
};
