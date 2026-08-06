class Solution {
public:
    int productOfDigits(int number) {
        int product = 1;
        while (number > 0) {
            int digit = number % 10;
            product = product * digit;
            number = number / 10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while (true) {
            int product = productOfDigits(n);
            if (product % t == 0) {
              return n;
            }
            n = n + 1;
        }
    }
};