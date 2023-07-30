class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<int> st;
        for(int i=0;i<temperatures.size();i++)
        {
            int val = temperatures[i];
            while(st.size()&&val>temperatures[st.top()]) // 能把别人pop出来时，即找到以一个更高的温度
            {
                res[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
