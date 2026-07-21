// Last updated: 7/21/2026, 4:35:50 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        while(i >= 0 && s[i] == ' ') {
            --i;
        }
        while(i >= 0 && s[i] != ' ') {
            ++length;
            --i;
        }

        return length;
    }
};