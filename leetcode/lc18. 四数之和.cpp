class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                int l=j+1,r=n-1;
                long long sum = (long long)target-(long long)nums[i]-(long long)nums[j];
                //if(sum<nums[j]) continue;
                while(l<r)
                {
                    if(nums[l]+nums[r]>sum)
                        r--;
                    else if(nums[l]+nums[r]<sum)
                        l++;
                    else
                    {
                        res.push_back(vector<int>{nums[i], nums[j], nums[l], nums[r]});
                        do l++;while(l<r&&nums[l]==nums[l-1]);
                        do r--;while(l<r&&nums[r]==nums[r+1]);
                    }
                }
            }
        }
        return res;
    }
};
