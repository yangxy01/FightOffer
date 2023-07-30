class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);
        stack<int> st;
        unordered_map<int,int> um;
        for(int i=0;i<nums2.size();i++)
        {
            while(st.size()&&nums2[i]>nums2[st.top()])
            {
                int val = nums2[st.top()];
                um[val] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<nums1.size();i++)
        {
            int val = nums1[i];
            if(um.find(val)!=um.end())
                res[i] = um[val];
        }
        return res;
    }
};
