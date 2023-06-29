class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window = s1.size();
        int n = s2.size();

        unordered_map<char, int> hashmap1;
        for(int i =0; i < window; i++) 
            hashmap1[s1[i]]++;

        unordered_map<char, int> hashmap2;
        int l =0;
        for(int r =0; r < n; r++){
            hashmap2[s2[r]]++;
            if( r - l + 1 > window) {
                hashmap2[s2[l]]--;
                l++;
            }
            if( r - l + 1 == window){
                int count =0;
                for(int i =0; i < window; i++)
                    if(hashmap1[s1[i]] == hashmap2[s1[i]]) 
                        count++;
                if(count == window)
                    return true;
            }
        }
        return false;
    }
};
