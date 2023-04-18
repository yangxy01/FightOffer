#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct node {
	int val;
	node* left = nullptr;
	node* right = nullptr;
	node(int _val):val(_val){}
};

vector<vector<int>> res;
int t;
void dfs(node* root, int sum, vector<int> path)
{
	sum += root->val;
	path.push_back(root->val);
	if (root->left == nullptr && root->right == nullptr)
	{
		if (sum == t)
			res.push_back(path);
		return;
	}
	if (root->left)
		dfs(root->left, sum, path);
	if (root->right)
		dfs(root->right, sum, path);
	return;
}

int main()
{
	node* p1 = new node(3);
	node* p2 = new node(2);
	node* p3 = new node(6);
	node* p4 = new node(5);
	node* p5 = new node(4);
	p1->left = p2;
	p1->right = p3;
	p2->left = p4;
	p2->right = p5;
	cin >> t;
	vector<int> path;
	dfs(p1, 0, path);
	for (int i = 0; i < res.size(); i++)
	{
		auto vec = res[i];
		for (auto x : vec)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}