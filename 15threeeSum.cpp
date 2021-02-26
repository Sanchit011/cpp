class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n<3){return ans;}
        for(int i = 0; i<n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(nums[i] + nums[j] + nums[k] == 0){s.insert({nums[i], nums[j], nums[k]}); j++; k--;}
                if(nums[i] + nums[j] + nums[k] > 0){k--;}
                if(nums[i] + nums[j] + nums[k] < 0){j++;}
            }
        }
        vector<vector<int>> v(s.begin(), s.end());
        return v;
    }
};