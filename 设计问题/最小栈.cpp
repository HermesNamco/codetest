class MinStack {
private:
    vector<int> stack;    
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return *(stack.end() - 1);
    }
    
    int getMin() {
        int min = INT_MAX;
        vector<int>::iterator pos = stack.begin();
        while(pos != stack.end()){
            if(*pos < min)
                min = *pos;
            ++ pos;
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */