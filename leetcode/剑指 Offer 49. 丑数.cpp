class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> v(1,1);
        int p2=0, p3=0, p5=0;
        for(int i=0;i<n-1;i++)
        {
            int next = min(2*v[p2], min(3*v[p3], 5*v[p5]));
            v.push_back(next);
            if(2*v[p2]==next) p2++;
            if(3*v[p3]==next) p3++;
            if(5*v[p5]==next) p5++;
        }
        return v.back();
    }
};
