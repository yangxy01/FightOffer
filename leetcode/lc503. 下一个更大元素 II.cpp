class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);
        stack<int> st;
        for(int i=0;i<2*n-1;i++)
        {
            int j=i;
            if(i>=n) j-=n;
            while(st.size()&&nums[j]>nums[st.top()])
            {
                res[st.top()]=nums[j];
                st.pop();
            }
            st.push(j);
        }
        return res;
    }
};
