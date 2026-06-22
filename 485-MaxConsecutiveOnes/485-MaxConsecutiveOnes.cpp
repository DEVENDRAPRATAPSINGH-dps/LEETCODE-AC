// Last updated: 6/22/2026, 12:55:18 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, ans = 0;
        for (int x : nums) {
            if (x == 1) cnt++;
            else cnt = 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};