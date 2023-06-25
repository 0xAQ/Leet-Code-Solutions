class MinStack {
public:
    stack<long> st;
    long min = INT_MAX;
    MinStack() {
        
    }
    
    void push(long val) {
        if(st.empty()){
            st.push(val);
            min = val;
        }
        else{
            if(val >= min) st.push(val);
            else {
                st.push(2*val - min);
                min = val;
            }
        }
    }
    
    void pop() {
        if(st.top() < min) min = 2*min - st.top();
        st.pop();
    }
    
    int top() {
        if(st.top() < min) return min;
        else return st.top();
    }
    
    int getMin() {
        return min;
    }
};
