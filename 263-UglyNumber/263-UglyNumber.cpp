// Last updated: 6/22/2026, 12:55:31 PM
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        for (int x : {2, 3, 5}) {
            while (n % x == 0) n /= x;
        }
        return n == 1;
    }
};