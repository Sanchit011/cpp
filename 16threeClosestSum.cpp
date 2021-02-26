class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[0]+nums[1]+nums[2];
        for(int i = 0; i<n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(nums[i] + nums[j] + nums[k] == target){ans = target; j++; k--; break;}
                if(nums[i] + nums[j] + nums[k] > target){
                    if(abs(ans-target) > abs(nums[i] + nums[j] + nums[k] - target)){ans = nums[i] + nums[j] + nums[k];}
                    k--;
                }
                if(nums[i] + nums[j] + nums[k] < target){
                    if(abs(ans-target) > abs(nums[i] + nums[j] + nums[k] - target)){ans = nums[i] + nums[j] + nums[k];}
                    j++;
                }
            }
        }
        return ans;
    }
};