class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> res;
        if(target<=2) return res;
        int acc = 0, l=1;
        for(int r=1;r<target;r++)
        {
            acc+=r;
            while(acc>target)
            {
                acc-=l;
                l++;
            }
            if(acc==target)
            {
                vector<int> tmp;
                for(int i=l;i<=r;i++)
                    tmp.push_back(i);
                res.push_back(tmp);
            }
        }
        return res;
    }
};
