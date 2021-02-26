class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int x = 0;
        int o = 0;
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(board[i][j] == 'X'){x++;}
                if(board[i][j] == 'O'){o++;}
            }
        }
        if(o>x){return false;}
        if(x>(o+1)){return false;}

        bool owin = false;
        for(int i = 0; i<3; i++){
            int count = 0;
            for(int j = 0; j<3; j++){
                if(board[i][j] == 'O'){count++;}
            }
            if(count == 3){owin = true;}
        }
        for(int i = 0; i<3; i++){
            int count = 0;
            for(int j = 0; j<3; j++){
                if(board[j][i] == 'O'){count++;}
            }
            if(count == 3){owin = true;}
        }
        if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){owin = true;}
        if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){owin = true;}

        bool xwin = false;
        for(int i = 0; i<3; i++){
            int count = 0;
            for(int j = 0; j<3; j++){
                if(board[i][j] == 'X'){count++;}
            }
            if(count == 3){xwin = true;}
        }
        for(int i = 0; i<3; i++){
            int count = 0;
            for(int j = 0; j<3; j++){
                if(board[j][i] == 'X'){count++;}
            }
            if(count == 3){xwin = true;}
        }
        if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){xwin = true;}
        if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){xwin = true;}
        
        if(owin && xwin){return false;}
        if(owin){
            if(x > o){return false;}
        }
        if(xwin){
            if(o > x-1){return false;}
        }
        return true;
    }
};