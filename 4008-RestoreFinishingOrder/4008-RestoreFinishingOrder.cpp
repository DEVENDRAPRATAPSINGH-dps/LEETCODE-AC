// Last updated: 6/22/2026, 12:54:48 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> s(friends.begin(), friends.end());
        vector<int> ans;
        for (int x : order) {
            if (s.count(x)) ans.push_back(x);
        }
        return ans;
    }
};