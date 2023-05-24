class Solution {
public:
    void removeExtraSpaces(string& s)
    {
        int sz=s.size();
        int slow = 0, fast = 0; // 定义快指针，慢指针，slow为新串最后一个元素的下一个位置
        // 1. 去掉字符串前面的空格
        while(fast<sz&&s[fast]==' ')
        {
            fast++;
        }
        // 2. 处理中间部分
        while(fast<sz)
        {
            if(s[fast]==' ') // 若为空格
            {
                s[slow++]=' ';
                while(fast<sz&&s[fast]==' ')
                    fast++;
            }
            else // 是字符
            {
                s[slow++]=s[fast++];
            }
        }
        // 3.去掉尾巴的空格
        if(slow>0&&s[slow-1]==' ')
            slow--;
        s.resize(slow);
    }
    string reverseWords(string s) {
        // 1.移除多余空格
        removeExtraSpaces(s);
        // 2.将整个字符串反转
        reverse(s.begin(), s.end());
        // 3.将每个单词反转
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
        reverse(s.begin()+start, s.begin()+end); // 末尾的单词也需要处理
        return s;
    }
};
