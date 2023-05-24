class Solution {
public:
    void removeExtraSpaces(string& s)
    {
        int sz=s.size();
        int slow = 0, fast = 0; // �����ָ�룬��ָ�룬slowΪ�´����һ��Ԫ�ص���һ��λ��
        // 1. ȥ���ַ���ǰ��Ŀո�
        while(fast<sz&&s[fast]==' ')
        {
            fast++;
        }
        // 2. �����м䲿��
        while(fast<sz)
        {
            if(s[fast]==' ') // ��Ϊ�ո�
            {
                s[slow++]=' ';
                while(fast<sz&&s[fast]==' ')
                    fast++;
            }
            else // ���ַ�
            {
                s[slow++]=s[fast++];
            }
        }
        // 3.ȥ��β�͵Ŀո�
        if(slow>0&&s[slow-1]==' ')
            slow--;
        s.resize(slow);
    }
    string reverseWords(string s) {
        // 1.�Ƴ�����ո�
        removeExtraSpaces(s);
        // 2.�������ַ�����ת
        reverse(s.begin(), s.end());
        // 3.��ÿ�����ʷ�ת
        int start=0,end=0;
        while(end<s.size())
        {
            if(s[end]==' ')
            {
                reverse(s.begin()+start, s.begin()+end);
                start=end+1;
            }
            end++;
        }
        reverse(s.begin()+start, s.begin()+end); // ĩβ�ĵ���Ҳ��Ҫ����
        return s;
    }
};
