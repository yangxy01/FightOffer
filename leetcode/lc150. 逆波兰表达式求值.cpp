class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(auto& x:tokens)
        {
            if(x=="+"||x=="-"||x=="*"||x=="/")
            {
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(x=="+")
                    st.push(a+b);
                else if(x=="-")
                    st.push(a-b);
                else if(x=="*")
                    st.push(a*b);
                else if(x=="/")
                    st.push(a/b);
            }
            else{
                st.push(stoi(x));
            }
        }
        return st.top();

        // for(auto x:tokens)
        // {
        //     if(x!="*"&&x!="/"&&x!="+"&&x!="-")
        //     {
        //         // int res=0,sgn=1;
        //         // if(x[0]=='-')
        //         // {
        //         //     x[0]='0';
        //         //     sgn=-1;
        //         // }
        //         // for(auto y:x)
        //         //     res=res*10+y-'0';
        //         // st.push(res*sgn);

        //         int res=stoi(x);
        //         st.push(res);
        //     }
        //     else
        //     {
        //         int b=st.top();
        //         st.pop();
        //         int a=st.top();
        //         st.pop();
        //         if(x=="*")
        //             st.push(a*b);
        //         else if(x=="/")
        //             st.push(a/b);
        //         else if(x=="+")
        //             st.push(a+b);
        //         else if(x=="-")
        //             st.push(a-b);
        //     }
        // }
        // return st.top();
    }
};
