class Solution {
public:
    double quickPow(double x, long n)
    {
        if(n==0) return 1.0;
        double res = quickPow(x, n/2);
        res*=res;
        if(n%2!=0)
        {
            res*=x;
        }
        return res;
    }
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        long m = n;
        if(n<0)
        {
            m*=-1;
            return 1/quickPow(x, m);
        }
        else
            return quickPow(x, m);
    }
};
