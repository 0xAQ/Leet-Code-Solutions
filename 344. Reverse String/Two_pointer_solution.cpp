class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0, j=s.size()-1; i<j; i++, j--)
            if(s[i] != s[j])
                swap(s[i], s[j]);
    }
};
