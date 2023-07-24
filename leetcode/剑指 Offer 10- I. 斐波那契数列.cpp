const int m = 1e9+7;
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int a=0,b=1,c=0;
        for(int i=2;i<=n;i++)
        {
            c=(a+b)%m;
            a=(b)%m;
            b=(c)%m;
        }
        return c;
    }
};
