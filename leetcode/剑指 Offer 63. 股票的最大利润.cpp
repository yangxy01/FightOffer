class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prev = 0, cur = 0;
        int res = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prev+prices[i]-prices[i-1]>0)
                cur = prev+prices[i]-prices[i-1];
            else
                cur = 0;
            // cout<<prices[i]<<" "<<cur<<endl;
            // cur=max(dp[i], dp[i-1]+prices[i]-prices[i-1]);
            res=max(res, cur);
            prev = cur;
        }
        return res;
    }
};
