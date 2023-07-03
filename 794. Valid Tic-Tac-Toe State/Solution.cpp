class Solution {
public:
    int win(vector<string>& board)
    {
        for(int i=0;i<3;i++){
                int xc1=0,xc2=0,oc1=0,oc2=0;
                for(int j=0;j<3;j++){
                    if(board[i][j]=='X')xc1++;
                    if(board[j][i]=='X')xc2++;
                    if(board[i][j]=='O')oc1++;
                    if(board[j][i]=='O')oc2++;
                }
                if(xc1==3||xc2==3) return 1;
                if(oc1==3||oc2==3) return 0;    
            }
            int xc1=0,xc2=0,oc1=0,oc2=0;
            for(int i=0;i<3;i++)
            {
                if(board[i][i]=='X')xc1++;
                if(board[i][2-i]=='X')xc2++;
                if(board[i][i]=='O')oc1++;
                if(board[i][2-i]=='O')oc2++;
            }
                if(xc1==3||xc2==3) return 1;
                if(oc1==3||oc2==3) return 0;
            return 2;
    }
    bool validTicTacToe(vector<string>& board) {
        int O=0,X=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                X++;
                else if(board[i][j]=='O')
                O++;
            }
        }
        if(X==O){
            if(X<3)return true;
            int check=win(board);
            if(check==1) return false;
            if(check==0||check==2) return true;
        }
        
        if(X-O == 1)
        {
            int check=win(board);
            if(check==0) return false;
            return true;
        }
        
        return false;
    }
};
