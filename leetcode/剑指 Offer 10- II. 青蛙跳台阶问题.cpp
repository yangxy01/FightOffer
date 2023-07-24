class Solution {
public:
    const int M = 1e9+7;
    int numWays(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        int a = 1, b = 1, c = 0;
        for(int i=2;i<=n;i++)
        {
            c = (a+b)%M;
            a = b;
            b = c;
        }
        return c;
    }
};
