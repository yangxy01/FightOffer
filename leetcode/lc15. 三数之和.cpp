class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int l,r,n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i]*-1;
            if(a<0) return res;
            if(i>0&&nums[i]==nums[i-1])
                continue;
            l=i+1,r=n-1;
            while(l<r)
            {
                if(nums[l]+nums[r]>a) //  和大了，则r--
                    r--;
                else if(nums[l]+nums[r]<a) //  和小了，则l++
                    l++;
                else
                {
                    res.push_back(vector<int>{-a, nums[l], nums[r]}); // 学习这个初始化方式，记得是-a
                    do l++; while(l<r&&nums[l]==nums[l-1]); // num[l]去重，在连续的num[l]数字中滑动到第一个!=num[l]的数
                    do r--; while(l<r&&nums[r]==nums[r+1]); // num[r]去重，在连续的num[r]数字中滑动到第一个!=num[r]的数
                }
            }
        }
        return res;
    }
};
