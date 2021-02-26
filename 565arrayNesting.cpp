class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != INT_MAX) {
                int start = nums[i], count = 0;
                while (nums[start] != INT_MAX) {
                    int temp = start;
                    start = nums[start];
                    count++;
                    nums[temp] = INT_MAX;
                }
                res = max(res, count);
            }
        }
        return res;
    }
};