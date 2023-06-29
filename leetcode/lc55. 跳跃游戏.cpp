class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int maxIndex = 0;
        int i=0, sz = nums.size();
        while(i<sz&&i<=maxIndex)
        {
            maxIndex=max(maxIndex, i+nums[i]);
            if(maxIndex>=nums.size()-1)
                return true;
            i++;
        }
        return false;
    }
};
