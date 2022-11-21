//#include<iostream>
//#include<vector>
//#include<map>
//
//using namespace std;
//
//class Solution {
//public:
//    bool hasPath(vector<vector<char>>& matrix, string& str) {
//        for (int i = 0; i < matrix.size(); i++)
//        {
//            for (int j = 0; j < matrix[0].size(); j++)
//            {
//                if (dfs(matrix, str, 0, i, j))
//                    return true;
//            }
//        }
//        return false;
//    }
//    bool dfs(vector<vector<char>>& matrix, string& str, int pos, int i, int j)
//    {
//        if (str[pos] != matrix[i][j])
//            return false;
//        if (pos == str.length()-1)
//            return true;
//        char save = matrix[i][j];
//        matrix[i][j] = '*';
//        int dx[] = { -1,1,0,0 };
//        int dy[] = { 0,0,-1,1 };
//        for (int k = 0; k < 4; k++)//ÉÏÏÂ×óÓÒ
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < matrix.size() && y >= 0 && y < matrix[0].size() && matrix[x][y] != '*')
//            {
//                bool ret = dfs(matrix, str, pos + 1, x, y);
//                if (ret)return true;
//            }
//        }
//        matrix[i][j] = save;
//        return false;
//    }
//};
//
//int main()
//{
//    Solution S;
//    vector<vector<char>> matrix(2);
//    string str = "ABEC", test="ABCE";
//    int k = 0;
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//            matrix[i].push_back(test[k++]);
//    }
//    auto ret = S.hasPath(matrix, str);
//    cout << ret << endl;
//}