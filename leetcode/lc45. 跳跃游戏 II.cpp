class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int maxIndex = nums[0];
        int curMaxIndex;
        int i=0,sz=nums.size(), step=0;
        while(1)
        {
            step++;  // 每走一个里层while则step++
            curMaxIndex = maxIndex; // 记录这次step最远能走到哪里
            while(i<=curMaxIndex)   // 遍历到下标为curMaxIndex处
            {
                if(i==sz-1)         // 已经到终点了
                    return step;
                maxIndex=max(maxIndex, i+nums[i]); 
                i++;
            }        
            cout<<endl;
        }
        return step;
    }
};
