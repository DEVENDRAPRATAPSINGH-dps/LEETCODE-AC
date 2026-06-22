// Last updated: 6/22/2026, 12:56:03 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (mp.count(x)) return {mp[x], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};