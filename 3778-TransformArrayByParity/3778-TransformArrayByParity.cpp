// Last updated: 6/22/2026, 12:54:55 PM
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int cnt = 0;
        for (int &x : nums) {
            if (x % 2 == 0) {
                x = 0;
                cnt++;
            } else {
                x = 1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};