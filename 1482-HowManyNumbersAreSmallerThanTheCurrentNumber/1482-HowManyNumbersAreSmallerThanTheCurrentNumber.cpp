// Last updated: 6/22/2026, 12:55:12 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101, 0), ans(nums.size());
        
        for (int x : nums) cnt[x]++;
        
        for (int i = 1; i <= 100; i++) cnt[i] += cnt[i - 1];
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) ans[i] = 0;
            else ans[i] = cnt[nums[i] - 1];
        }
        
        return ans;
    }
};