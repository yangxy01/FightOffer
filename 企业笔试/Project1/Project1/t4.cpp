//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int isOk(string s)
//{
//	int i = 0, j = s.length() - 1;
//	while (i < j)
//	{
//		if (s[i] != s[j])
//			return -1;
//		i++;
//		j--;
//	}
//	return s.length();
//}
//
//int main()
//{
//
//	string str, s;
//	int i, j, res = 0;
//	cin >> str;
//	for (int m = 0; m < str.length(); m++)
//	{
//		for (int n = m + 1; n < str.length(); n++)
//		{
//			int ret = isOk(str.substr(m, n - m + 1));
//			res = max(res, ret);
//		}
//	}
//	cout << res << endl;
//	return 0;
//}