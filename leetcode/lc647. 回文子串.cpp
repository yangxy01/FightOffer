class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(), res=0;
        for(int mid=0;mid<n;mid++)//ö�����ĵ�
        {
            // �������
            for(int k=0;k<n;k++)//ö�ٿ��
            {
                int l=mid-k,r=mid+k;
                if(l<0||r>=n||s[l]!=s[r]) break;
                res++;
            }
            // ż�����
            for(int k=0;k<n;k++)//ö�ٿ��
            {
                int l=mid-k,r=mid+k+1;
                if(l<0||r>=n||s[l]!=s[r]) break;
                res++;
            }
        }
        return res;
    }
};
