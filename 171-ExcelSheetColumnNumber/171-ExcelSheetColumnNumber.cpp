// Last updated: 6/22/2026, 12:55:39 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (char c : columnTitle) {
            ans = ans * 26 + (c - 'A' + 1);
        }
        return ans;
    }
};