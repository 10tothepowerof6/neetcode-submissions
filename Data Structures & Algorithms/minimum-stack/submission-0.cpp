class MinStack {
public:
    stack<int> stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        stack<int> temp = stk;
        int min = temp.top();
        temp.pop();
        while(!temp.empty())
        {
            min = min < temp.top() ? min : temp.top();
            temp.pop();
        }
        return min;
    }
};
