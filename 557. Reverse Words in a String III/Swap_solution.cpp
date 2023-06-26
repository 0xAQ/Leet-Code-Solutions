class Solution {
public:
    string reverseWords(string s) {
        int x = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == ' ' || i == s.size() -1){
                int l = x; 
                int r = (i == s.size() - 1) ? i : i - 1;
                while(l < r){
                    swap(s[l], s[r]);
                    l++; r--;
                }
                x = i + 1;
            }
        }
        return s;
    }
};
