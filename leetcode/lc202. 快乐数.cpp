class Solution {
public:
    int getNum(int n)
    {
        int res=0;
        while(n)
        {
            int k=n%10;
            n/=10;
            res=res+k*k;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_set<int> uset;
        uset.insert(n);
        while(1)
        {
            n=getNum(n);
            if(n==1)
                return true;
            if(uset.insert(n).second==false)
                return false;
        }
    }
};
