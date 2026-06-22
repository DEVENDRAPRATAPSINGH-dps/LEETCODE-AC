// Last updated: 6/22/2026, 12:55:36 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};