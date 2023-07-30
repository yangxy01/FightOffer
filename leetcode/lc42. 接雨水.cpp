class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int res = 0;
        for(int i=0;i<height.size();i++)
        {
            while(!st.empty() && height[i]>height[st.top()])
            {
                int curIndex = st.top();
                st.pop();
                if(st.empty()) break; // 处理第一根有高度的柱子的情况
                int l = st.top(), r = i;
                int h = min(height[l], height[r])-height[curIndex];
                int w = r-l-1;
                res += h*w;
            }
            st.push(i);
        }
        return res;
    }
};
