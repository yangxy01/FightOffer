class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        if(nums.size() == 3) return max(nums[0], max(nums[1], nums[2]));
        // f��ʾ���������һ�����ӣ�g��ʾ�����ǵ�һ������
        vector<int> f(nums.size()), g(nums.size());
        f[0] = nums[0];
        f[1] = max(nums[0], nums[1]);
        g[1] = nums[1];
        g[2] = max(nums[1], nums[2]);
        for(int i=2;i<nums.size();i++)
        {
            if(i<nums.size()-1) // ���������һ������
                f[i] = max(f[i-2]+nums[i], f[i-1]);
            if(i>2) // �����ǵ�һ������
                g[i] = max(g[i-2]+nums[i], g[i-1]);
        }
        return max(f[nums.size()-2], g[nums.size()-1]);
    }
};
