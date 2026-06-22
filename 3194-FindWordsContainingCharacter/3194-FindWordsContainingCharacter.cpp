// Last updated: 6/22/2026, 12:54:59 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) ans.push_back(i);
        }
        return ans;
    }
};