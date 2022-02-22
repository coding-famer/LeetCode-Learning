#include<stack>
using namespace std;
class CQueue {
    stack<int> s1,s2;
    int size;
public:
    CQueue() {
        while(!s1.empty())
            s1.pop();
        while(!s2.empty())
            s2.pop();
        size = 0;
    }
    
    void appendTail(int value) {
        s1.push(value);
        size++;
    }
    
    int deleteHead() {
        if(size == 0)
            return -1;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ret = s2.top();
        s2.pop();
        size--;
        return ret;

    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */