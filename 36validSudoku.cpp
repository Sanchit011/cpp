class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int arr[9][9];
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                if(board[i][j] == '.'){arr[i][j] = 0;}
                else{arr[i][j] = board[i][j] - '0';}
            }
        }
        for(int i = 0; i<9; i++){
            int val[10] = {0};
            for(int j = 0; j<9; j++){
                val[arr[i][j]]++;
            }
            for(int j = 1; j<10; j++){
                if(val[j] > 1){return false;}
            }
        }
        for(int i = 0; i<9; i++){
            int val[10] = {0};
            for(int j = 0; j<9; j++){
                val[arr[j][i]]++;
            }
            for(int j = 1; j<10; j++){
                if(val[j] > 1){return false;}
            }
        }
        for(int k = 0; k<9; k++){
            int val[10] = {0};
            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    val[arr[i+(3*(k%3))][j+(3*(k/3))]]++;
                }
            }
            for(int j = 1; j<10; j++){
                    if(val[j] > 1){return false;}
                }
        }
        return true;
    }
};