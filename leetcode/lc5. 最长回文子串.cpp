class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), res = 0;
        if(n==0||n==1) return s;
        string str;
        for(int mid=0;mid<n;mid++)//ö�����ĵ�
        {
            int count = 1;
            // �������
            for(int k=0;k<n;k++)//ö�ٿ��
            {
                int l=mid-k,r=mid+k;
                if(l<0||r>=n||s[l]!=s[r]){
                    count-=2; // ����
                    if(count>res)
                    {
                        res=count;
                        l++,r--; // ����
                        str=s.substr(l, r-l+1);
                    }
                    break;
                }
                count+=2;
            }
            // ż�����
            count=0;
            for(int k=0;k<n;k++)//ö�ٿ��
            {
                int l=mid-k,r=mid+k+1;
                if(l<0||r>=n||s[l]!=s[r]){
                    if(count>=res)
                    {
                        res=count;
                        l++,r--; // ����
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
