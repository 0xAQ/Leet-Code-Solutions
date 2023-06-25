class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto ele: tokens){
            if(ele == "+" || ele == "*" || ele == "-" || ele == "/" ){
                int temp = st.top();
                st.pop();
                if(ele == "+") st.top() = st.top() + temp;
                else if(ele == "-") st.top() = st.top() - temp;
                else if(ele == "*") st.top() = st.top() * temp;
                else st.top() = st.top() / temp;
            }
            else st.push(stoi(ele));
        } 
        return st.top();
    }
};
