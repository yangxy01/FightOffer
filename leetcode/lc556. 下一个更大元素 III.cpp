class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int i=s.size()-2;
        while(i>=0&&s[i]>=s[i+1]) i--;
        if(i<0) return -1; //该序列全是递减的
        int j=s.size()-1;
        while(s[j]<=s[i]) j--;
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        long long res = stoll(s);
        if(res>INT_MAX) return -1;
        return res;
    }
};
