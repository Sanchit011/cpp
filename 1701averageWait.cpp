class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait = 0, cur = 0;
        double n = customers.size();
        for (int i = 0; i<n; i++) {
            if(customers[i][0] > cur){cur = customers[i][0];}
            cur = cur + customers[i][1];
            wait += cur - customers[i][0];
        }
        return wait / n;
    }
};