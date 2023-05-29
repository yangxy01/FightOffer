class MyStack {
private:
    queue<int> que1;
    queue<int> que2;
public:
    MyStack() {

    }
    
    void push(int x) {
        if(que1.size())
            que1.push(x);
        else
            que2.push(x);
    }
    
    int pop() {
        if(que1.size())
        {
            while(que1.size()>1)
            {
                que2.push(que1.front());
                que1.pop();
            }
            int tmp=que1.front();
            que1.pop();
            return tmp;
        }
        else
        {
            while(que2.size()>1)
            {
                que1.push(que2.front());
                que2.pop();
            }
            int tmp=que2.front();
            que2.pop();
            return tmp;
        }
    }
    
    int top() {
        if(que1.size())
        {
            while(que1.size()>1)
            {
                que2.push(que1.front());
                que1.pop();
            }
            int tmp=que1.front();
            que2.push(que1.front());
            que1.pop();
            return tmp;
        }
        else
        {
            while(que2.size()>1)
            {
                que1.push(que2.front());
                que2.pop();
            }
            int tmp=que2.front();
            que1.push(que2.front());
            que2.pop();
            return tmp;
        }
    }
    
    bool empty() {
        return que1.empty()&&que2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
