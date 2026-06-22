// Last updated: 6/22/2026, 12:55:45 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, r = nums.size() - 1;
        while (m <= r) {
            if (nums[m] == 0) swap(nums[l++], nums[m++]);
            else if (nums[m] == 1) m++;
            else swap(nums[m], nums[r--]);
        }
    }
};