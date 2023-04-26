class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0,q=0;
        while(q<nums.size())
        {
            if(nums[q]==nums[p])
                q++;
            else
            {
                p++;
                if(q<nums.size())
                    nums[p]=nums[q];
            }
        }
        return p+1;

        // int len=nums.size();
        // int i=0,j=0,count=0;
        // while(i<len)
        // {
        //     j=i+1;
        //     count=0;
        //     while(j<len&&nums[j]==nums[i])
        //     {
        //         j++;
        //         count++;
        //     }
        //     while(j<len)
        //     {
        //         nums[j-count]=nums[j];
        //         j++;
        //     }
        //     len-=count;
        //     i++;
        // }
        // return len;
    }
};
