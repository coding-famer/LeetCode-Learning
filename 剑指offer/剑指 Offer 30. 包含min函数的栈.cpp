#include<stack>
using namespace std;
class MinStack {
    stack<int> a;
    stack<int> mi;
public:
    /** initialize your data structure here. */
    MinStack() {
        mi.push(INT_MAX);
    }
    
    void push(int x) {
        a.push(x);
        mi.push(::min(mi.top(),x));
    }
    
    void pop() {
        a.pop();
        mi.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int min() {
        return mi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */