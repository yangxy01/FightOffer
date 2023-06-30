class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalSum = 0;
        int curSum = 0;
        int startIndex = 0;
        for(int i=0;i<gas.size();i++)
        {
            totalSum+=gas[i]-cost[i];
            curSum+=gas[i]-cost[i];
            if(curSum<0)
            {
                startIndex=i+1;
                curSum=0;
            }
        }
        if(totalSum<0) return -1;
        return startIndex;
    }
};
