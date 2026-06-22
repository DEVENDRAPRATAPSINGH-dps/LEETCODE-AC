// Last updated: 6/22/2026, 12:54:56 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> cnt(101, 0), ans;
        
        for (int x : nums) {
            cnt[x]++;
            if (cnt[x] == 2) ans.push_back(x);
        }
        
        return ans;
    }
};