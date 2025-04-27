class MyStack {
    queue<int> input;
    queue<int> output;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        output.push(x);

        while(!input.empty()) {
            output.push(input.front());
            input.pop();
        }
        swap(input,output);
    }
    
    int pop() {
        int val=input.front();
        input.pop();
        return val;
    }
    
    int top() {
        return input.front();
    }
    
    bool empty() {
        return input.empty();
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