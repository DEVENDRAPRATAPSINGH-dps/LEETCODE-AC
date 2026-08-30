class Solution {
public:
    vector<int> targetIndices(vector<int>& numbers, int target) {

        sort(numbers.begin(), numbers.end());

        vector<int> target_indices;

        for (int i = 0; i < numbers.size(); i++) {

            if (numbers[i] == target) {
                target_indices.push_back(i);
            }

        }

        return target_indices;
    }
};