class Solution {
public:
    int cuttingRope(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        if(n==4) return 4;
        int res = 1;
        while(n>4)
        {
            n-=3;
            res*=3;
        }
        res*=n;
        return res;
    }
};
