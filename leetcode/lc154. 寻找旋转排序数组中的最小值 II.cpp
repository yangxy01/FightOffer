class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r&&nums[r]==nums[r-1]) r--; // ɾ���Ҳ��ֺ��߲��֣����Ҳ��ֱض�С���󲿷֣��γɵ����ԣ�������һ��
        if(nums[l]<nums[r]) return nums[l]; // ��ʱ�ȼ���û��ת��ֱ�ӷ��ص�һ��Ԫ��
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]<nums[0])
                r=mid;
            else
                l=mid+1;
        }
        return nums[l];
    }
};
