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
//    bool isNumber(string s) {
//        int sz = s.length();
//        int dot = 0, ec = 0;
//        for (int i = 0; i < sz; i++)
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//                continue;
//            else if (s[i] == '.')
//            {
//                dot++;
//                if (dot > 1) return false;
//                if ((i + 1 < sz) && (s[i + 1] == 'e' || s[i + 1] == 'E'))//123.e  55.E
//                    return false;
//            }
//            else if (s[i] == 'e' || s[i] == 'E')
//            {
//                if (i == 0 || i == sz - 1)return false;
//                ec++;
//                if (ec > 1)return false;
//                bool hasnum = false;
//                for (int j = i + 1; j < sz; j++)
//                {
//                    if (s[j] >= '0' && s[j] <= '9')
//                        hasnum = true;
//                }
//                if (hasnum == false)return false;
//            }
//            else if (s[i] == '+' || s[i] == '-')
//            {
//                if (i + 1 < sz && (s[i + 1] >= '0' && s[i + 1] <= '9'))
//                    continue;
//                else
//                    return false;
//            }
//            else
//                return false;
//        }
//        return true;
//    }
//};
//
//int main()
//{
//    Solution S;
//}