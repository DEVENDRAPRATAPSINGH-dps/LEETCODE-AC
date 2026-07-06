class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maximumRange = -1;
        int totalSum = 0;

        for (int index = 0; index < nums.size(); index++) {


            int currentNumber = nums[index];
            int largestDigit = currentNumber % 10;
            int smallestDigit = currentNumber % 10;

            while (currentNumber > 0) {


                int currentDigit = currentNumber % 10;
                if (currentDigit > largestDigit) {
                    largestDigit = currentDigit;
                }


                if (currentDigit < smallestDigit) {
                    smallestDigit = currentDigit;
                }

                currentNumber = currentNumber / 10;
            }
            int digitRange = largestDigit - smallestDigit;
            if (digitRange > maximumRange) {
                maximumRange = digitRange;
                totalSum = nums[index];
            }
            
             else if (digitRange == maximumRange) {
                totalSum = totalSum + nums[index];
            }
        }
        return totalSum;
    }
};