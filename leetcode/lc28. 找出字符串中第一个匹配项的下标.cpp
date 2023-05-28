class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        char s[n+1],p[m+1];
        int next[m+1];
        for(int i=0;i<n;i++)
            s[i+1]=haystack[i];
        for(int i=0;i<m;i++)
            p[i+1]=needle[i];
        // 1.Çónext
        next[1]=0;
        for(int i=2,j=0;i<=m;i++)
        {
            while(j&&p[i]!=p[j+1])
                j=next[j];
            if(p[i]==p[j+1])
                j++;
            next[i]=j;
        }
        // 2.kmp
        for(int i=1,j=0;i<=n;i++)
        {
            while(j&&s[i]!=p[j+1])
                j=next[j];
            if(s[i]==p[j+1])
                j++;
            if(j==m)
                return i-m;
        }
        return -1;
    }
};
