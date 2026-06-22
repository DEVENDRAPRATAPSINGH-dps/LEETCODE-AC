// Last updated: 6/22/2026, 12:55:49 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, cnt = 0;
        while (i >= 0 && s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            cnt++;
            i--;
        }
        return cnt;
    }
};