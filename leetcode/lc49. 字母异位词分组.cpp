class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for(string& s:strs)
        {
            string key(26,'0');//��s��ÿ����ĸ���ֵ�Ƶ�ι���key
            for(auto ch:s)
                key[ch-'a']++;
            map[key].push_back(s);
        }
        for(auto& item: map)
            res.push_back(item.second);
        return res;
    }
};
