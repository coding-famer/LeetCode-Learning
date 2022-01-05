// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem155.h"

using namespace std;
// @before-stub-for-debug-end


/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
private:
stack<int> a;
stack<int> mi;
public:
    /** initialize your data structure here. */
    MinStack() {
        mi.push(INT_MAX);
    }
    
    void push(int val) {
        a.push(val);
        mi.push(min(mi.top(),val));
    }
    
    void pop() {
        a.pop();
        mi.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return mi.top();
    }
};


//Your MinStack object will be instantiated and called as such:
/* MinStack* obj = new MinStack();
obj->push(val);
obj->pop();
int param_3 = obj->top();
int param_4 = obj->getMin(); */

// @lc code=end

