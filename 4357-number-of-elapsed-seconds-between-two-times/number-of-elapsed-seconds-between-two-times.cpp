class Solution {
public:
    int secondsBetweenTimes(string shuru, string khatam) {

        int h1 = stoi(shuru.substr(0, 2));
        int m1 = stoi(shuru.substr(3, 2));
        int s1 = stoi(shuru.substr(6, 2));

        int h2 = stoi(khatam.substr(0, 2));
        int m2 = stoi(khatam.substr(3, 2));
        int s2 = stoi(khatam.substr(6, 2));

        int start = h1 * 3600 + m1 * 60 + s1;
        int end = h2 * 3600 + m2 * 60 + s2;

        return end - start;
    }
};