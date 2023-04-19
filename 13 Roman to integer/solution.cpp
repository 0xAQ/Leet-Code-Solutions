class Solution {
public:
    int romanToInt(string s) {
        int integer = 0;
        for(int i=0; i < s.length(); i++){
            char ch = s[i];
            switch(ch) {
                case 'I' :
                    if( s[i+1] == 'V'){
                        integer += 4;
                        i++;
                    } else if(s[i+1] == 'X'){
                        integer += 9;
                        i++;
                    } else 
                        integer += 1;
                    break;
                case 'V' :
                    integer += 5;
                    break;
                case 'X' :
                    if( s[i+1] == 'L'){
                        integer += 40;
                        i++;
                    } else if(s[i+1] == 'C'){
                        integer += 90;
                        i++;
                    } else 
                        integer += 10;
                    break;
                case 'L' :
                    integer += 50;
                    break;
                case 'C' :
                    if(s[i+1] == 'D'){
                        integer += 400;
                        i++;
                    } else if(s[i+1] == 'M'){
                        integer += 900;
                        i++;
                    } else 
                        integer += 100;
                    break;
                case 'D' :
                    integer += 500;
                    break;
                case 'M' :
                    integer += 1000;
                    break;
                default :
                    cout << "Invalid Roman" << endl;
            }
        }
        return integer;
    }
};
