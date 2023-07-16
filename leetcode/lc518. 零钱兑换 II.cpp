class Solution {
public:
    int change(int amount, vector<int>& coins) {
        //if(amount == 0) return 0;
        vector<int> dp(5002, 0);
        dp[0]=1;
        for(int i=0;i<coins.size();i++)
        {
            for(int j=coins[i];j<=amount;j++)
            {
                dp[j]+=dp[j-coins[i]];
            }
            for(int j=0;j<=amount;j++)
                cout<<dp[j]<<" ";
            cout<<endl;
        }
        return dp[amount];
    }
};
