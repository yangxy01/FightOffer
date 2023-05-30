class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x:s)
        {
            if(x=='('||x=='{'||x=='[')
                st.push(x);
            else
            {
                if(x==')')
                {
                    if(st.empty()) return false;
                    else if(st.top()!='(')  return false;
                    else st.pop();
                }
                else if(x==']')
                {
                    if(st.empty()) return false;
                    else if(st.top()!='[')  return false;
                    else st.pop();
                }
                else if(x=='}')
                {
                    if(st.empty()) return false;
                    else if(st.top()!='{')  return false;
                    else st.pop();
                }
            }
        }
        return st.empty();
    }
};
