class Solution {
public:
    string capitalizeTitle(string title) {
        int i=0;

        while(i < title.size()){
            int size = 0;
            int j = i;

            while(j < title.size()){

                if(title[j]==' ') break;

                size++;
                title[j] = tolower(title[j]);
                j++;
            }

            if(size > 2) title[i]=toupper(title[i]);
            i = j + 1;
        }

        return title;
    }
};
