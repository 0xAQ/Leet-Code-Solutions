class Solution {
public:
    int addMinimum(string word) {
        int ans =0;
        if(word.size() == 1) return 2;

        if(word[0] == 'b') ans+=1;
        else if(word[0] == 'c') ans+=2; 

        for(int i = 0; i < word.size(); i++){
                if(int(word[i+1]) == int(word[i]) + 2 || int(word[i+1]) == int(word[i]) - 1) ans+=1;
                else if(int(word[i+1]) == int(word[i])) ans+=2;
        }

        if(word[word.size() -1] == 'a') ans+=2;
        else if(word[word.size() -1] == 'b') ans+=1;

        return ans;
    }
};
