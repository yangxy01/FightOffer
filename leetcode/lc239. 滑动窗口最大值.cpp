const int N = 1e5;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int front = 0, end = -1;
        int q[N] = { 0 };
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            while (end >= front && nums[i] >= nums[q[end]])
                end--;
            q[++end] = i;
            while (end >= 0 && i-q[front] + 1 > k)
                front++;
            if(i>=k-1)
                res.push_back(nums[q[front]]);
        }      
        return res;
    }
};
