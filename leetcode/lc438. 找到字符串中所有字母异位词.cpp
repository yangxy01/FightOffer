class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char, int> target, window;
        int valid = 0;//记录频次满足的字母的个数
        for(auto ch:p)
            target[ch]++;
        int i=0,j=0,n=p.size();
        while(j<s.size())
        {
            if(target.count(s[j]))
            {
                window[s[j]]++;
                if(window[s[j]]==target[s[j]])
                {
                    valid++;
                }
            }
            while(j-i+1>=n) 
            {
                if(valid==target.size())
                {
                    res.push_back(i);
                }
                if(target.count(s[i]))
                {      
                    if(window[s[i]]==target[s[i]])
                    {
                        valid--;
                    }
                    window[s[i]]--;
                }
                i++;
            }
            j++;
        }
        return res;
    }
};
