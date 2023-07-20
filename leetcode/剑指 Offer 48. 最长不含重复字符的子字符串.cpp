class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        unordered_map<char, int> us;
        int res = 0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            us[ch]++;
            while(us[ch]>1)
            {
                us[s[j]]--;
                j++;
            }
            res = max(res, i-j+1);
        }
        return res;
    }
};
