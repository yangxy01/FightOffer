class Solution {
public:
    int lastRemaining(int n, int m) {
        // dp
        int res = 0;
        for(int i=2;i<=n;i++)
        {
            res = (res+m)%i;
        }
        return res;
        // ตÝน้
        // if(n==1) return 0;
        // return (lastRemaining(n-1, m)+m)%n;
    }
};
