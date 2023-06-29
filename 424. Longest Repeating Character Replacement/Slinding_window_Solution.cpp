class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hashmap;
        int l =0;
        int n  = s.size();
        int maxOcc = 0;
        for(int r = 0; r < n; r++){
            hashmap[s[r]]++;
            maxOcc = max(maxOcc , hashmap[s[r]]);
            if( (r - l + 1) - maxOcc > k ){
                hashmap[s[l]]--;
                l++;
            }
        }
        return n - l;
    }
};
