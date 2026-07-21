// Last updated: 7/21/2026, 4:35:10 PM
class Solution {
public:
    int firstUniqChar(string s) {
       int frequency[26] ={0};
       for(int i=0; i<s.size(); i++){
        frequency[s[i]-'a']++;

       }
        for(int i=0; i<s.size(); i++){
        if(frequency[s[i]-'a'] == 1){
            return {i};
        }
        
       }
       return -1;
    }
};