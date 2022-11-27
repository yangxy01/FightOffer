//// reverseList.cpp : 定义控制台应用程序的入口点。
////
//
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int num;
//    struct Node* next;
//    Node(int _num) :num(_num) { next = nullptr; }
//};
//
//void print(struct Node* head)
//{
//    struct Node* p = head;
//    while (p)
//    {
//        cout << p->num << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
//
//struct Node* Reverse(struct Node* head)
//{
//    if (!head) return nullptr;
//    struct Node* prev = nullptr;
//    struct Node* cur = head;
//    if (!cur) return nullptr;
//    struct Node* next = cur->next;
//    while (cur)
//    {
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//        if(cur)
//            next = cur->next;
//    }
//    return prev;
//}
//
//int main()
//{
//    struct Node* p1 = new Node(1);
//    struct Node* p2 = new Node(2);
//    struct Node* p3 = new Node(3);
//    p1->next = p2;
//    p2->next = p3;
//    print(p1);
//
//    struct Node* p = Reverse(p1);
//    print(p);
//
//    return 0;
//}
