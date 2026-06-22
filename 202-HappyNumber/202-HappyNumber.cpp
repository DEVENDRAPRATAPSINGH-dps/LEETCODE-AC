// Last updated: 6/22/2026, 12:55:37 PM
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while (n != 1 && !s.count(n)) {
            s.insert(n);
            int sum = 0;
            while (n) {
                int d = n % 10;
                sum += d * d;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};