class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto ele: s){
            if ( ele == '(' || ele == '[' || ele == '{' ) stack.push(ele);
            else{
                if(stack.empty()) return false;
                else{
                    if(ele == ')' && stack.top() != '(') return false;
                    else if(ele == '}' && stack.top() != '{') return false;
                    else if(ele == ']' && stack.top() != '[') return false;
                    else stack.pop();
                }
            }
        }
        if(stack.empty()) return true;
        else return false;
    }
};
