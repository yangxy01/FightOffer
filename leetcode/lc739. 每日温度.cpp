class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<int> st;
        for(int i=0;i<temperatures.size();i++)
        {
            int val = temperatures[i];
            while(st.size()&&val>temperatures[st.top()]) // �ܰѱ���pop����ʱ�����ҵ���һ�����ߵ��¶�
            {
                res[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
