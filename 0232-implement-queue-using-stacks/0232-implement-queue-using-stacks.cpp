class MyQueue {
    stack<int>input;
    stack<int>output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int x;
        if(empty()) return -1;
        if(output.empty()==false){
            x = output.top();
            output.pop();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            x = output.top();
            output.pop();
        }
        return x; 
    }
    
    int peek() {
        int x;
        if(empty()) return -1;
        if(!output.empty()){
            x = output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            x = output.top();
        }
        return x;
    }
    
    bool empty() {
        if(input.empty()==true && output.empty()==true) return  true;
        return false;
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