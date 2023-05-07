class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0;
        unordered_map<char, int> state;//��ʾ��ǰ���ڵ���ĸ�ķֲ���Ŀ���ǰ�����ȫ�ɵ�
        char ch;
        for (auto& x : t)
            state[x]++;
        int num = state.size();//��¼Ŀ��Ԫ�صĸ���
        int len = 0x3f3f3f3f;
        int res_i, res_j;
        while (j < s.size())
        {
            //1.���µ�ǰ״̬�����Ƿ���������
            ch = s[j];
            if (state.find(ch) != state.end())//��Ŀ��Ԫ��
            {
                state[ch]--;//�൱�ڸɵ�ch
                if (state[ch] == 0)
                    num--;
            }
            while (num==0)//2.�ƶ�i��ʹ�ò���������
            {
                //2.1�ȼ�¼��ǰ�Ĵ�
                if (j - i + 1 < len)
                {
                    len = j - i + 1;
                    res_i = i;
                    res_j = j;
                }
                //2.2�ȸ���״̬��ɾ��iԪ�أ����ƶ�iָ��
                ch = s[i];
                if (state.find(ch) != state.end())//��Ŀ��Ԫ��
                {
                    state[ch]++;//�ָ�ch
                    if (state[ch] == 1)
                        num++;
                }
                i++;
            }
            j++;
        }
        if (len == 0x3f3f3f3f)
            return "";
        return string(s.begin()+res_i, s.begin() + res_j+1);
    }
};
