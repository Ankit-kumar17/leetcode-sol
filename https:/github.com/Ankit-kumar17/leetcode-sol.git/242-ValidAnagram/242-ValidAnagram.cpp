// Last updated: 7/21/2026, 4:35:21 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.size() != t.size()){
        return false;
     }

     int frequency[26] ={0};

     for(int i=0; i<s.size(); i++){
        frequency[s[i] - 'a']++;
     }

     for(int i=0; i<t.size(); i++){
        frequency[t[i] - 'a']--;
     }

     for(int i=0; i<26; i++){
        if(frequency[i] !=0){
            return false;
        }
     }

     return true;
    }

};