class Solution {
    bool backTrace(string& s, vector<string>& wordDict, unordered_set<string>& us, int startIndex, vector<int>& state)
    {
        if(startIndex>=s.size())
            return true;
        if(state[startIndex] != -1) // 如果这个点被搜过了
            return state[startIndex];
        for(int end = startIndex+1;end<=s.size();end++)
        {
            if(us.count(string(s.begin()+startIndex, s.begin()+end)))
            {
                if(backTrace(s, wordDict, us, end, state))
                {
                    state[startIndex] =1; // 表明从startIndex及往后字符串都可被正确拆分
                    return true;
                }
            }
        }
        state[startIndex] = 0; // 表明从startIndex往后字符串怎么样都不可以被正确拆分
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> us(wordDict.begin(), wordDict.end());
        vector<int> state(s.size(), -1); // 初始化为-1表示还没记录过状态
        return backTrace(s, wordDict, us, 0, state);
    }
};
