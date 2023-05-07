class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0;
        unordered_map<char, int> state;//表示当前存在的字母的分布，目的是把它们全干掉
        char ch;
        for (auto& x : t)
            state[x]++;
        int num = state.size();//记录目标元素的个数
        int len = 0x3f3f3f3f;
        int res_i, res_j;
        while (j < s.size())
        {
            //1.更新当前状态，看是否满足题意
            ch = s[j];
            if (state.find(ch) != state.end())//是目标元素
            {
                state[ch]--;//相当于干掉ch
                if (state[ch] == 0)
                    num--;
            }
            while (num==0)//2.移动i，使得不满足条件
            {
                //2.1先记录当前的答案
                if (j - i + 1 < len)
                {
                    len = j - i + 1;
                    res_i = i;
                    res_j = j;
                }
                //2.2先更改状态，删掉i元素，再移动i指针
                ch = s[i];
                if (state.find(ch) != state.end())//是目标元素
                {
                    state[ch]++;//恢复ch
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
