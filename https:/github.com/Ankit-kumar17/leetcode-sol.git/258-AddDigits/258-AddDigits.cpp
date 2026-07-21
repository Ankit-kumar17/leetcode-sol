// Last updated: 7/21/2026, 4:35:19 PM
class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
        return 0;
        if (num % 9 ==0)
        return 9;
        return num % 9 ;
    }
};