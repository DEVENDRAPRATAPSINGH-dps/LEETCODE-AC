// Last updated: 6/22/2026, 12:55:57 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(ans) != 0) {
                ans.pop_back();
                if (ans.empty()) return "";
            }
        }
        return ans;
    }
};