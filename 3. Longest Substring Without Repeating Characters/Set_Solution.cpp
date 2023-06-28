class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxSize = 0;
        int n = s.size();
        unordered_set<char> set;
        int i =0;
        for(int j =0 ; j < n ; j++){
            while(set.count(s[j])){
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            maxSize = max(maxSize, j -i +1);
        }
        return maxSize;
    }
};
