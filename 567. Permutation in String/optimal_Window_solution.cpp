class Solution {
public:
    bool checkInclusion(string s1, string s2){   
        int n = s2.size();
        int m = s1.size();

        if(m> n) return false;
        
        int firstMap[26]{};
        int secondMap[26]{};


        for (int i = 0; i < m; i++){
            firstMap[s1[i] - 'a']++;
            secondMap[s2[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++)
            if (firstMap[i] == secondMap[i])
                matches++;
        
        int l = 0;
        for(int r = m ; r< n; r++){
            if (matches == 26)
            return true;
            
            int index = s2[r] - 'a';
            if(secondMap[index] == firstMap[index])
                matches--;
        
            secondMap[index]++;
            if (secondMap[index] == firstMap[index])
                matches++;

            index = s2[l] - 'a';
            if (secondMap[index] == firstMap[index])
                matches--;
    
            secondMap[index]--;
            if (secondMap[index] == firstMap[index])
                matches++;
            l++;

        }
        return matches == 26;
    }
};
