class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() -1;

        while( l < r){
            while(l < r && !iswalnum(s[l])) l++;
            while(l < r && !iswalnum(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])){
            cout<< l << " "<< r << " " << s[l] << " " << s[r];
            return false;
            }
            l++; r--;
        }

        return true;
    }
};
