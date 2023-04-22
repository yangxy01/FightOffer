class Solution {
public:
    int mySqrt(int x) {
        double l = 0, r = x;
        if (x == 1) return 1;
        else if (x < 1)
        {
            l = x, r = 1;
        }

        while ((r - l) >= 1e-8)
        {
            double mid = (l + r) / 2;
            if (fabs(mid * mid - x)<0.001)
                return mid;
            else if(mid* mid > x)
                r = mid;
            else
                l = mid;
            //cout<<l<<" "<<r<<endl;
        }
        //cout<<l<<endl;
        return (int)l;
    }
};
