class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int i=0,j=1;//i���ڴ������е�ÿһ��0
        while(i<len)
        {
            if(nums[i]==0)
            {
                //j=i+1;// �ҵ�һ����0Ԫ��swapλ��
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
