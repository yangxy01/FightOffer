class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money[3]={0,0,0};
        int total = 0;
        for(auto x: bills)
        {
            if(x==5)
                money[0]+=1;
            else if(x==10)
            {
                money[1]+=1;
                if(money[0]>0)
                    money[0]-=1;
                else
                    return false;
            }
            else
            {
                money[2]+=1;
                if(money[1]>0)
                {
                    money[1]-=1;
                    if(money[0]>0)
                        money[0]-=1;
                    else
                        return false;
                }
                else
                {
                    if(money[0]>=3)
                        money[0]-=3;
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
