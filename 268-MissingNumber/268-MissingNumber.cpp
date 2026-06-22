// Last updated: 6/22/2026, 12:55:30 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            x ^= i ^ nums[i];
        }
        return x;
    }
};