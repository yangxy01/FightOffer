class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> acc(cost.size()+1, 0);
        acc[0]=acc[1]=0;
        for(int i=2;i<=cost.size();i++)
        {
            acc[i]=min(acc[i-1]+cost[i-1], acc[i-2]+cost[i-2]);
        }
        return acc[cost.size()];
    }
};
