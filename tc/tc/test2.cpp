//#include<iostream>
//using namespace std;
////
////struct Node {
////	int val;
////	Node* left = nullptr;
////	Node* right = nullptr;
////	Node(int _val) :val(_val){}
////};
////int h = 0;
////void dfs(Node* root,int tmp)
////{
////	if (root->left == nullptr && root->right == nullptr)
////		h = max(tmp, h);
////	if(root->left)
////		dfs(root->left, tmp + 1);
////	if (root->right)
////		dfs(root->right, tmp + 1);
////}
////
////int main()
////{
////	Node* p = new Node(1);
////	Node* p1 = new Node(2);
////	Node* p2 = new Node(3);
////	Node* p3 = new Node(4);
////	p->left = p1;
////	p1->left = p2;
////	p1->right = p3;
////	dfs(p,1);
////	cout << h << endl;
////	return 0;
////}
//
////class Time
////{
////public:
////	Time(int n=1)
////	{
////		_s = n;
////		cout << "Time(int n=1)" << endl;
////	}
////	Time(const Time& T)
////	{
////		this->_s = T._s;
////		cout << "Time(const Time& T)" << endl;
////	}
////private:
////	int _s;
////};
////
//
//
//
//class Date
//{
//private:
//	int _day;
//public:
//	Date(int day = 1)
//	{
//		_day = day;
//		cout << "Date(int day=1)" << endl;
//	}
//	Date(const Date& d)
//	{
//		this->_day = d._day;
//		cout << "Date(const Date& d)" << endl;
//	}
//	Date& operator=(const Date& d)
//	{
//		this->_day = d._day;
//		cout << "operator=" << endl;
//		return *this;
//	}
//};
//
//Date func()
//{
//	static Date d;
//	return d;
//}
//
//int main()
//{
//	Date dd;
//	dd = func();
//}
//
//
//
//
