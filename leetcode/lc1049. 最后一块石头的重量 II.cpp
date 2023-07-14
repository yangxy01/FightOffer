class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int total = 0;
        for(auto x: stones)
            total+=x;
        vector<int> dp(total/2+1, 0);
        for(int i=0;i<stones.size();i++)
        {
            for(auto x: dp)
                cout<<x<<" ";
            cout<<endl;
            for(int j=total/2;j>=stones[i];j--)
                dp[j]=max(dp[j-stones[i]]+stones[i], dp[j]);
        }
        return total-2*dp[total/2];
    }
};
