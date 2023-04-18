//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class B {
//	virtual void g() {
//		cout << "B::g" << endl;
//	}
//private:
//	virtual void f() {
//		cout << "B::f" << endl;
//	}
//};
//
//class H: public B {
//	void g() {
//		cout << "H::g" << endl;
//	}
//	virtual void h() {
//		cout << "H::f" << endl;
//	}
//};
//
//typedef void (*fun)(void);
//
//int main()
//{
//	H h;
//	fun pf;
//	for (int idx = 0; idx < 3; idx++)
//	{
//		pf = (fun) * ((unsigned long*)*(unsigned long*)(&h) + idx);
//		pf();
//	}
//	/*int* p = (int*)0xffff9876;
//	*p = 0xbadadd;*/
//	return 0;
//}