class Solution {
public:
    vector<string> res;
    vector<string> nums;
    void backTrace(vector<string>& map, int startIndex, string& path)
    {
        if(startIndex==nums.size())
        {
            res.push_back(path);
            return;
        }
        string s=nums[startIndex];
        for(auto ch: s)
        {
            path+=ch;
            backTrace(map, startIndex+1, path);
            path.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {  
        if(digits.size()==0)
            return res;
        vector<string> map{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(auto& ch: digits)
        {
            nums.push_back(map[ch-'0']);
        }
        string path;
        backTrace(map, 0, path);
        return res;
    }
};
