class Solution {
public:
    long long removeZeros(long long n) {
        long long reverseNumber = 0;
        while (n > 0) {
            int digit = n % 10;
            reverseNumber = reverseNumber * 10 + digit;
            n = n / 10;
        }
        long long answer = 0;
        while (reverseNumber > 0) {
            int digit = reverseNumber % 10;
            if (digit != 0) {
                answer = answer * 10 + digit;
            }
            reverseNumber = reverseNumber / 10;
        }
        return answer;
    }
};