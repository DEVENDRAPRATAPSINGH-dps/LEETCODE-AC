// Last updated: 6/22/2026, 12:54:51 PM
class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> cnt(26, 0);
        
        for (char c : s) cnt[c - 'a']++;
        
        int v = 0, c = 0;
        
        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v = max(v, cnt[i]);
            else
                c = max(c, cnt[i]);
        }
        
        return v + c;
    }
};