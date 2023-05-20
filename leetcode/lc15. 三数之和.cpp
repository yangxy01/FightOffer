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
                if(nums[l]+nums[r]>a) //  �ʹ��ˣ���r--
                    r--;
                else if(nums[l]+nums[r]<a) //  ��С�ˣ���l++
                    l++;
                else
                {
                    res.push_back(vector<int>{-a, nums[l], nums[r]}); // ѧϰ�����ʼ����ʽ���ǵ���-a
                    do l++; while(l<r&&nums[l]==nums[l-1]); // num[l]ȥ�أ���������num[l]�����л�������һ��!=num[l]����
                    do r--; while(l<r&&nums[r]==nums[r+1]); // num[r]ȥ�أ���������num[r]�����л�������һ��!=num[r]����
                }
            }
        }
        return res;
    }
};
