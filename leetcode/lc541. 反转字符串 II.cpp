class Solution {
public:
    void myReverse(string&s, int n, int k)
    {
        int i=n;
        int j=n+k;
        if(s.size()<j)
            j=s.size();
        j--;
        while(i<j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    string reverseStr(string s, int k) {
        int n=0;
        while(n<s.size())
        {
            myReverse(s, n, k);
            n+=2*k;
        }   
        return s;
    }
};
