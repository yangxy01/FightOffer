const int N=5e4+10;
int tmp[N];

class Solution {
    int merge_sort(vector<int>& nums, int l, int r)
    {
        if(l>=r) return 0;
        int mid = l+r>>1, res = 0;
        res += merge_sort(nums, l, mid);
        
        res += merge_sort(nums, mid+1, r);
        int k = l;
        int i = l, j = mid+1;
        while(i<=mid&&j<=r)
        {
            if(nums[i]<=nums[j])
            {
                tmp[k++]=nums[i++];
            }
            else
            {
                tmp[k++]=nums[j++];
                res+=mid-i+1;
            }
        }
        while(i<=mid)
        {
            tmp[k++]=nums[i++];
        }
        while(j<=r)
        {
            tmp[k++]=nums[j++];
        }
        for(int i=l;i<=r;i++)
            nums[i]=tmp[i];
        return res;
    }
public:
    int reversePairs(vector<int>& nums) {
        return merge_sort(nums, 0, nums.size()-1);
    }
};
