// Last updated: 6/22/2026, 12:55:03 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto &s : operations) {
            if (s[1] == '+') x++;
            else x--;
        }
        return x;
    }
};