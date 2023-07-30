class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), res = 0;
        if(n==0||n==1) return s;
        string str;
        for(int mid=0;mid<n;mid++)//枚举中心点
        {
            int count = 1;
            // 奇数情况
            for(int k=0;k<n;k++)//枚举跨度
            {
                int l=mid-k,r=mid+k;
                if(l<0||r>=n||s[l]!=s[r]){
                    count-=2; // 回退
                    if(count>res)
                    {
                        res=count;
                        l++,r--; // 回退
                        str=s.substr(l, r-l+1);
                    }
                    break;
                }
                count+=2;
            }
            // 偶数情况
            count=0;
            for(int k=0;k<n;k++)//枚举跨度
            {
                int l=mid-k,r=mid+k+1;
                if(l<0||r>=n||s[l]!=s[r]){
                    if(count>=res)
                    {
                        res=count;
                        l++,r--; // 回退
                        str=s.substr(l, r-l+1);
                    }
                    break;
                }
                count+=2;
            }
        }
        return str;
    }
};
