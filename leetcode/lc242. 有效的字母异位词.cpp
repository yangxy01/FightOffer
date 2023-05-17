class Solution {
public:
    bool isAnagram(string s, string t) {
        int numOfChar[30]={0};
        if(s.size()!=t.size()) 
            return false;
        for(int i=0;i<s.size();i++)
        {
            numOfChar[s[i]-'a']++;
            numOfChar[t[i]-'a']--;
        }
        for(int i=0;i<30;i++)
            if(numOfChar[i]!=0)
                return false;
        return true;
    }
};
