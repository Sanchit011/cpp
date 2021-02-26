class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());
        vector<int> ans;
        for(int i=0;i<B.size();i++){
            auto it=upper_bound(A.begin(),A.end(),B[i]);
            if(it!=A.end()){
                ans.push_back(A[it-A.begin()]);
                A.erase(it);
            }else{
                ans.push_back(A[0]);
                A.erase(A.begin());
            }
        }
        return ans;
    }
};
