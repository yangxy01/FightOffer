//#include<iostream>
//#include<vector>
//#include<map>
//#include<queue>
//#include<utility>
//
//using namespace std;
//
//class Solution {
//public:
//    int NumberOf1(int n) {
//        n = (unsigned int)n;
//        unsigned int un = n;
//        int count = 0;
//        while (n)
//        {
//            if (n & 0x1)
//                count++;
//            n = n >> 1;
//        }
//        return count;
//    }
//};
//
//int main()
//{
//    Solution S;
//    cout << S.NumberOf1(9);
//    int n = 10;
//    n = (unsigned int)n;
//}