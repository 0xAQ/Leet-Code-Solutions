class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> row;
        // unordered_map<char,int> column;
        for(int i = 0; i < 9; i++){
            row.clear();
            for(int j = 0 ; j < 9; j++ ){
                if(board[i][j] != '.'){
                    if(row[board[i][j]]) return false;
                    else row[board[i][j]]++;
                }
            }
        }
        for(int i = 0; i < 9; i++){
            row.clear();
            for(int j = 0 ; j < 9; j++ ){
                if(board[j][i] != '.'){
                    if(row[board[j][i]]) return false;
                    else row[board[j][i]]++;
                }
            }
        }
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                row.clear();
                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {
                        if(board[i][j] != '.'){
                            if(row[board[i][j]]) return false;
                            else row[board[i][j]]++;
                        }
                    }
                }
            }
        }
        return true;
    }


};
