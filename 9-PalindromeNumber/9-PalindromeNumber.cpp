// Last updated: 6/22/2026, 12:56:00 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int reverse = 0;
        int dup = x;
        while (x != 0) {
            int last_digit = x % 10;
            if (reverse > INT_MAX/10) return false;
            reverse = (reverse * 10) + last_digit;
            x = x / 10;
        }
        return reverse == dup;
    }
};