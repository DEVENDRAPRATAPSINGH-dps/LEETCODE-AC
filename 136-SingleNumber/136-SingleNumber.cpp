// Last updated: 6/22/2026, 12:55:42 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (int i : nums) x ^= i;
        return x;
    }
};