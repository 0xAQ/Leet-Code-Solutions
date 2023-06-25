class Solution {
public:
    bool isValid(string s) {
       stack<char> stack;
        unordered_map<char,char> map;
        map[')'] = '(';
        map['}'] = '{';
        map[']'] = '[';
        for(auto ele:s){
            if(ele=='(' || ele=='{' || ele=='[') stack.push(ele);
            else {
                if(stack.empty()) return false;
                if(map[ele] != stack.top()) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
