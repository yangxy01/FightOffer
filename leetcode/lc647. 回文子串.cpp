class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(), res=0;
        for(int mid=0;mid<n;mid++)//枚举中心点
        {
            // 奇数情况
            for(int k=0;k<n;k++)//枚举跨度
            {
                int l=mid-k,r=mid+k;
                if(l<0||r>=n||s[l]!=s[r]) break;
                res++;
            }
            // 偶数情况
            for(int k=0;k<n;k++)//枚举跨度
            {
                int l=mid-k,r=mid+k+1;
                if(l<0||r>=n||s[l]!=s[r]) break;
                res++;
            }
        }
        return res;
    }
};
