class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> um1;
        for(int i=0;i<nums1.size();i++)
            for(int j=0;j<nums2.size();j++)
                um1[nums1[i]+nums2[j]]++;
        int res=0;
        for(int i=0;i<nums3.size();i++)
            for(int j=0;j<nums4.size();j++)
            {
                int target = 0-nums3[i]-nums4[j];
                if(um1.find(target)!=um1.end())
                    res+=um1[target];
            }
        return res;
    }
};
