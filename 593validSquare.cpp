class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector <int> s;
        int x;
        x = (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
        s.push_back(x);
        x = (p1[0]-p3[0])*(p1[0]-p3[0]) + (p1[1]-p3[1])*(p1[1]-p3[1]);
        s.push_back(x);
        x = (p1[0]-p4[0])*(p1[0]-p4[0]) + (p1[1]-p4[1])*(p1[1]-p4[1]);
        s.push_back(x);
        x = (p2[0]-p3[0])*(p2[0]-p3[0]) + (p2[1]-p3[1])*(p2[1]-p3[1]);
        s.push_back(x);
        x = (p2[0]-p4[0])*(p2[0]-p4[0]) + (p2[1]-p4[1])*(p2[1]-p4[1]);
        s.push_back(x);
        x = (p3[0]-p4[0])*(p3[0]-p4[0]) + (p3[1]-p4[1])*(p3[1]-p4[1]);
        s.push_back(x);
        int a = *max_element(s.begin(), s.end());
        int b = *min_element(s.begin(), s.end());
        int sides = 0;
        int diagonals = 0;
        for(int i = 0; i<6; i++){
            if(s[i] == a){diagonals++;}
            if(s[i] == b){sides++;}
        }
        if(diagonals == 2 && sides == 4){return true;}
        
        return false;
    }
};