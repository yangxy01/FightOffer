class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> f(n+1);
        for(int i=1,minv=prices[0];i<n;i++)
        {
            f[i]=max(f[i-1], prices[i]-minv);
            minv=min(minv, prices[i]);
        }

        int second_value = 0; // 记录第二段能获得的最大利润
        int maxv = prices[n-1];
        int res = max(0, f[n-1]);        
        for(int i=n-1;i>=1;i--)
        {
            second_value = max(second_value, maxv-prices[i]);
            maxv=max(maxv, prices[i]);
            res = max(f[i-1]+second_value, res);
        }
        return res;
    }
};
