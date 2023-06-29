class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        auto first = unique(nums.begin(), nums.end());
        nums.erase(first, nums.end());
        if (nums.size() <= 2) 
            return nums.size();
        for(auto x:nums)
            cout<<x<<" ";
        cout<<endl;
        int res = 2;
        int prev = nums[0];
        int cur, next;
        for (int i=1; i<nums.size()-1; i++)
        {
            cur = nums[i];
            next = nums[i+1];
            if ((cur>prev&&cur>next) || (cur<prev&&cur<next))
                res++;
            prev = cur;
        }
        return res;
    }
};
