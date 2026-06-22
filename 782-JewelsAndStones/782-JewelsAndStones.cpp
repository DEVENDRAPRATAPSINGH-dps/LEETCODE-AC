// Last updated: 6/22/2026, 12:55:16 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (char s : stones) {
            for (char j : jewels) {
                if (s == j) count++;
            }
        }
        return count;
    }
};