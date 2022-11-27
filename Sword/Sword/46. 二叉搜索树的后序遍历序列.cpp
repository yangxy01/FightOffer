//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<queue>
//#include<utility>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> mid;
//    vector<int> post;
//    bool verifySequenceOfBST(vector<int> sequence) {
//        mid = sequence;
//        sort(mid.begin(), mid.end());
//        post = sequence;
//        int n = sequence.size();
//        return reBuild(0, n - 1, 0, n - 1);
//    }
//
//    bool reBuild(int mid_l, int mid_r, int post_l, int post_r)
//    {
//        if (mid_r < mid_l)
//            return true;
//        int pos = -1;
//        int root = post[post_r];
//        for (int i = mid_l; i <= mid_r; i++)
//        {
//            if (mid[i] == root)
//            {
//                pos = i;
//                break;
//            }
//            else if (mid[i] > root)
//                return false;
//        }
//        return reBuild(mid_l, pos - 1, post_l, post_l + pos - mid_l - 1) && reBuild(pos + 1, mid_r, post_l + pos - mid_l, post_r - 1);
//    }
//};
//
//int main()
//{
//    Solution S;
//    
//    vector<int> data{ 4, 8, 6, 12, 16, 14, 10 };
//    auto ret = S.verifySequenceOfBST(data);
//}