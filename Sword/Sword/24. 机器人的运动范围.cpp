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
//    int movingCount(int threshold, int rows, int cols)
//    {
//        if (!rows || !cols) return 0;
//        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
//        queue<pair<int, int>> que;
//        que.push({ 0,0 });
//        visited[0][0] = true;
//        int count = 0;
//        while (que.size())
//        {
//            cout << ">>>" << que.size() << endl;
//            pair<int, int> pos = que.front();
//            count++;
//            que.pop();
//            int dx[4] = { -1,+1,0,0 };
//            int dy[4] = { 0,0,-1,+1 };
//            for (int i = 0; i < 4; i++)
//            {
//                int x = pos.first + dx[i];
//                int y = pos.second + dy[i];
//                if (x >= 0 && x < rows && y >= 0 && y < cols && visited[x][y] == false)
//                {
//                    if (satify(make_pair(x, y), threshold))
//                    {
//                        que.push(make_pair(x, y));
//                    }
//                    visited[x][y] = true;
//                }
//            }
//        }
//        return count;
//    }
//
//    bool satify(pair<int, int> pos, int& threshold)
//    {
//        int sum = 0;
//        int x = pos.first;
//        int y = pos.second;
//        while (x)
//        {
//            sum += x % 10;
//            x /= 10;
//        }
//        while (y)
//        {
//            sum += y % 10;
//            y /= 10;
//        }
//        if (sum <= threshold)
//            return true;
//        return false;
//    }
//};
//
//int main()
//{
//    Solution S;
//    cout<<S.movingCount(7, 4, 5);
//}