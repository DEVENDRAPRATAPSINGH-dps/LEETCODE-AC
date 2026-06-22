// Last updated: 6/22/2026, 12:54:53 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (int x : nums) sum += x;
        int r = sum % k;
        return r == 0 ? 0 : r;
    }
};