class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int min = 0;
        int max = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){min++;}
            else{min--;}
            if(s[i] != ')'){max++;}
            else{max--;}
            if(max < 0){return false;}
            if(min < 0){min  = 0;}
        }
        if(min > 0){return false;}
        return true;
    }
};