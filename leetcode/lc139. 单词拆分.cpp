class Solution {
    bool backTrace(string& s, vector<string>& wordDict, unordered_set<string>& us, int startIndex, vector<int>& state)
    {
        if(startIndex>=s.size())
            return true;
        if(state[startIndex] != -1) // �������㱻�ѹ���
            return state[startIndex];
        for(int end = startIndex+1;end<=s.size();end++)
        {
            if(us.count(string(s.begin()+startIndex, s.begin()+end)))
            {
                if(backTrace(s, wordDict, us, end, state))
                {
                    state[startIndex] =1; // ������startIndex�������ַ������ɱ���ȷ���
                    return true;
                }
            }
        }
        state[startIndex] = 0; // ������startIndex�����ַ�����ô���������Ա���ȷ���
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> us(wordDict.begin(), wordDict.end());
        vector<int> state(s.size(), -1); // ��ʼ��Ϊ-1��ʾ��û��¼��״̬
        return backTrace(s, wordDict, us, 0, state);
    }
};
