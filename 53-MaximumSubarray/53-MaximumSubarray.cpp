// Last updated: 6/22/2026, 12:55:51 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = nums[0];
        for (int x : nums) {
            sum += x;
            maxi = max(maxi, sum);
            if (sum < 0) sum = 0;
        }
        return maxi;
    }
};