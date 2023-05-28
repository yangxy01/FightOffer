class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

    void dump()
    {
        while(inStack.size())
        {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }
public:
    MyQueue() {

    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        if(outStack.empty())
            dump();
        int tmp=outStack.top();
        outStack.pop();
        return tmp;
    }
    
    int peek() {
        if(outStack.empty())
            dump();
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty()&&outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
