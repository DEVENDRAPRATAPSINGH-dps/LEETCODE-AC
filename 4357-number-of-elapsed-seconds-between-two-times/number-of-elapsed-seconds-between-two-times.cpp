class Solution {
public:
    int secondsBetweenTimes(string &shuru, string &khatam) {

        int start =
            ((shuru[0]-'0')*10 + (shuru[1]-'0'))*3600 +
            ((shuru[3]-'0')*10 + (shuru[4]-'0'))*60 +
            ((shuru[6]-'0')*10 + (shuru[7]-'0'));

        int end =
            ((khatam[0]-'0')*10 + (khatam[1]-'0'))*3600 +
            ((khatam[3]-'0')*10 + (khatam[4]-'0'))*60 +
            ((khatam[6]-'0')*10 + (khatam[7]-'0'));

        return end - start;
    }
};