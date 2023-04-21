class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 1;

        if(islower(word[0]))
            for( int i =1 ; i < word.size(); i++){
                if(islower(word[i])) count++;
                else break;
            }
        else{
            count++;
            if(isupper(word[1]))
                for(int i=2 ; i < word.size(); i++){
                    if(isupper(word[i])) count++;
                    else break;
                }
            else
                for(int i=2 ; i < word.size(); i++){
                    if(islower(word[i])) count++;
                    else break;
                }
        }
        return word.size() <= count;
    } 
};
