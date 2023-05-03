const int N=1e5+10;
int ccount[N];
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        memset(ccount, 0, sizeof(ccount));
        int len=fruits.size();
        int i=0,j=0;
        int res=0, total = 0;
        int ret=0;
        while(j<len)
        {
            int type = fruits[j];
            if(ccount[type]==0)
            {
                ccount[type]=1;
                total++;
                res++;
                if(total>2)
                {
                    while(1)
                    {
                        ccount[fruits[i]]--;
                        res--;
                        i++;
                        if(ccount[fruits[i-1]]==0)
                            break;  
                    }
                    total--;
                }
            }
            else
            {
                ccount[type]++;
                res++;
            }
            ret=max(ret, res);
            j++;
        }
        //cout<<ret<<endl;
        return ret;
    }
};
