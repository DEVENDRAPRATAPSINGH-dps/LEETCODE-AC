// Last updated: 6/22/2026, 12:55:40 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, ans = 0;
        for (int x : nums) {
            if (cnt == 0) ans = x;
            if (x == ans) cnt++;
            else cnt--;
        }
        return ans;
    }
};