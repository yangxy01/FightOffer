class Solution {
public:
    class cmp {
    public:
        bool operator()(pair<int, int>& l, pair<int, int>& r)
        {
            return l.second > r.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        vector<int> res;
        for (auto& x : nums)
            um[x]++;
        // 创建优先队列，指定存储元素，底层数据结构，比较规则
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (auto& x : um)
        {
            pq.push(x);
            if (pq.size() > k)
                pq.pop();
        }     
        while (pq.size())
        {
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
    }
};
