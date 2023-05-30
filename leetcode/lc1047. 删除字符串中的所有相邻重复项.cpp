class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto x:s)
        {
            if(!st.empty()&&x==st.top())
                st.pop();
            else
                st.push(x);
        }
        string res;
        while(st.size())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
