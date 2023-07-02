class Solution {
public:
    int candy(vector<int>& ratings) {
        int sz = ratings.size();
        vector<int> res(sz, 1);
        for(int i=1;i<sz;i++) // 从左往右扫一遍：看右孩子是否大于左孩子
            if(ratings[i]>ratings[i-1])
                res[i]=res[i-1]+1;
        int sum = res[sz-1];
        for(int i=sz-2;i>=0;i--) // 从右往左扫一遍：看左孩子是否大于右孩子
        {
            if(ratings[i]>ratings[i+1])
                res[i]=max(res[i+1]+1, res[i]);
            sum+=res[i];
        }
        return sum;
    }
};
