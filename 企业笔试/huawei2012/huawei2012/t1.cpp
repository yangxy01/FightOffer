#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int cur=24;



double chatToNum(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch == 'A')
		return 1;
	else if (ch == 'T')
		return 10;
	else if (ch == 'J')
		return 11;
	else if (ch == 'Q')
		return 12;
	else if (ch == 'K')
		return 13;
}

vector<double> getAll(double a, double b)
{
	vector<double> res;
	res.push_back(a + b);
	res.push_back(a - b);
	res.push_back(a * b);
	res.push_back(a / b);
	return res;
}

bool equal(string& s, double res)
{
	if (s.size() == 1)
	{
		if (chatToNum(s[0]) == res)
			return true;
		else
			return false;
	}

	int n = s.size();//3
	for (int i = 0; i < n; i++)//3
	{
		char num = s[i];
		string t;
		for (int j = 0; j < n; j++)//3
			if (i != j)
				t += s[j];
		vector<double> new_s = getAll(res, chatToNum(num));
		for (int k = 0; k < n; k++)
		{
			if (equal(t, new_s[k]))
			{
				return true;
			}
		}
	}
	return false;
}



int main()
{
	char ch;
	int count = 0;
	string s;
	while (cin >> ch)
	{
		count++;
		s += ch;
		bool flag = false;
		if (count == 4)
		{
			for (int i = 0; i < 4; i++)
			{
				char num = s[i];
				string t;
				for (int j = 0; j < 4; j++)
					if (i != j)
						t += s[j];
				vector<double> new_s = getAll(cur, chatToNum(num));
				for (int k = 0; k < 4; k++)
				{
					if (equal(t, new_s[k]))
					{
						flag = true;
						break;
					}
				}
			}
			s.resize(0);
			count = 0;
			if (flag)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		
	}
	return 0;
}
/*
A 5 5 5
A A A A
*/