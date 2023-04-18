#include<iostream>
#include<vector>
#include<utility>
using namespace std;
const int N = 11;
int ban[N];
int ans[N];
int n;
vector<vector<int>> res;

void recur(int i, vector<int> path, vector<bool> visited,int count)
{
	if (count >= n)
	{
		res.push_back(path);
		return;
	}
	int target = ans[i];
	
	bool flag = true;
	if (ban[i] < ans[i])//up
	{
		int j = i + 1;
		while(j <= n)
		{
			if (target >= ban[j])
			{
				flag = false;
				break;
			}
			j++;
		}
	}
	else if (ban[i] > ans[i])
	{
		int j = i - 1;
		while(j >= n)
		{
			if (target <= ban[j])
			{
				flag = false;
				break;
			}
			j--;
		}
	}

	if (flag)
	{
		path.push_back(i);
		count++;
		int old = ban[i];
		ban[i] = target;
		int k;
		for(k=1;k<=n;k++)
			if (visited[k] == false)
			{
				visited[k] = true;
				recur(k, path, visited, count);
				visited[k] = false;
			}
		if (path.size() == n)
		{
			res.push_back(path);
		}
		ban[i] = old;
	}
	return;
}
int main()
{
	cin >> n;
	int margin = 2000/(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> ban[i];
		ans[i] = margin * i;
	}
	
	vector<int> path;
	vector<bool> visited(n+1, false);
	for (int i = 1; i <= n; i++)
	{
		visited[i] = true;
		recur(i, path,visited,0);
		visited[i] = false;
	}
	for (int i = 0; i < res.size(); i++)
	{
		for (auto x : res[i])
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
/*
3
50 60 1000

4
50 600 700 1000
*/