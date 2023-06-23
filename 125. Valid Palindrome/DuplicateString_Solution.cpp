class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.length();i++){
            if(iswalnum(s[i])){
                st.push_back(tolower(s[i]));
            }
        }
        int l = 0;
        int r = st.size() - 1;
        while( l < r){
            if(st[l] != st[r]){ 
                return false;
            }
            l++; r--;
        }

        return true;
    }
};
