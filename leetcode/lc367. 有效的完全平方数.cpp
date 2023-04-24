class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long l=0,r=num;
        while(l<r)
        {
            long long mid=l+r+1>>1;
            if(mid*mid<=num)
                l=mid;
            else
                r=mid-1;
        }
        if(l*l==num)
            return true;
        return false;
    }
};
