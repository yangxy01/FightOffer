class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        h.insert(h.begin(), 0);
        h.push_back(0);
        int n = h.size();
        stack<int> st;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&h[i]<h[st.top()])
            {
                int height = h[st.top()];
                st.pop();
                int l = st.top(), r = i;
                int w = r-l-1;
                res = max(res, w*height);
            }
            st.push(i);
        }
        return res;
    }
};
