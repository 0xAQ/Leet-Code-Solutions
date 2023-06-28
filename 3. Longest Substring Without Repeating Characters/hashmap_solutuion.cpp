class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxSize = 0;
        int n = s.size();
        unordered_map<char,int> umap;
        int i =0;
        for(int j =0 ; j < n ; j++){
            while(umap.find(s[j]) != umap.end()){
                umap.erase(s[i]);
                i++;
            }
            umap[s[j]] = j;
            maxSize = max(maxSize, j -i +1);
        }
        return maxSize;
    }
