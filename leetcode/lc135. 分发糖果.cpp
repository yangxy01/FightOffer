class Solution {
public:
    int candy(vector<int>& ratings) {
        int sz = ratings.size();
        vector<int> res(sz, 1);
        for(int i=1;i<sz;i++) // ��������ɨһ�飺���Һ����Ƿ��������
            if(ratings[i]>ratings[i-1])
                res[i]=res[i-1]+1;
        int sum = res[sz-1];
        for(int i=sz-2;i>=0;i--) // ��������ɨһ�飺�������Ƿ�����Һ���
        {
            if(ratings[i]>ratings[i+1])
                res[i]=max(res[i+1]+1, res[i]);
            sum+=res[i];
        }
        return sum;
    }
};
