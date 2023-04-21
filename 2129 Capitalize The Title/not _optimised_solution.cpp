class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> words;
        string word = "";
        string ans = "";
        for (int i =0 ; i < title.size(); i++){
            if(title[i] == ' ' ){
                cout<< word << " " ;
                words.push_back(word);
                word = "";
            }
            else {
                word += title[i];
                if(i == title.size()-1) words.push_back(word);    
            }
        }

        for(int w =0 ; w < words.size() ; w++){
            if(words[w].size() <= 2){
                for(char &ch : words[w]) ch = tolower(ch);
            }
            
            else {
                words[w][0] = toupper(words[w][0]);
                for(int j = 1 ;j < words[w].size(); j++){
                    words[w][j] = tolower(words[w][j]);
                }
            }
            cout << words[w] << " ";
            ans += words[w];
            if (w == words.size()-1) {

            }else ans += " ";
        }

        return ans;
    }
};
