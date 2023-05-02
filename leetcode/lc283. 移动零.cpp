class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int i=0,j=1;//i用于处理序列的每一个0
        while(i<len)
        {
            if(nums[i]==0)
            {
                //j=i+1;// 找第一个非0元素swap位置
                while(j<len)
                    if(nums[j]!=0)
                    {
                        swap(nums[i], nums[j]);
                        break;
                    }
                    else
                        j++;
                if(j==len)
                    break;
            }
            i++;
            j++;
        }
    }
};
