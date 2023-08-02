class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0, prev=0;
        unordered_map<char,int> letters;
        for(int i=0;i<n;i++)
        {
            letters[s[i]]++;
            while(prev<=i&&letters[s[i]]>1)
            {
                letters[s[prev]]--;
                prev++;
            }
            res=max(res, i-prev+1);
        }
        return res;
    }
};
