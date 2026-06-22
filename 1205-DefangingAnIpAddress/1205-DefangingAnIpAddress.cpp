// Last updated: 6/22/2026, 12:55:13 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for (char c : address) {
            if (c == '.') ans += "[.]";
            else ans += c;
        }
        return ans;
    }
};