// Last updated: 6/22/2026, 12:55:21 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i = 1;
        while (i * i <= num) {
            if (i * i == num) return true;
            i++;
        }
        return false;
    }
};