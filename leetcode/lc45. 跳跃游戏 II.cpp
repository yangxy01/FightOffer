class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int maxIndex = nums[0];
        int curMaxIndex;
        int i=0,sz=nums.size(), step=0;
        while(1)
        {
            step++;  // ÿ��һ�����while��step++
            curMaxIndex = maxIndex; // ��¼���step��Զ���ߵ�����
            while(i<=curMaxIndex)   // �������±�ΪcurMaxIndex��
            {
                if(i==sz-1)         // �Ѿ����յ���
                    return step;
                maxIndex=max(maxIndex, i+nums[i]); 
                i++;
            }        
            cout<<endl;
        }
        return step;
    }
};
