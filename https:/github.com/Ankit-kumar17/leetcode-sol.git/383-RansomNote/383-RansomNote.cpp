// Last updated: 7/21/2026, 4:35:11 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    

    int frequency[26] ={0};

   
    
for(int i=0; i<magazine.size(); i++){
    frequency[magazine[i]-'a']++;
    
}
 for(int i=0; i<ransomNote.size(); i++){
        frequency[ransomNote[i]-'a']--;
         if(frequency[ransomNote [i]-'a'] < 0){
    return false;
    }
}
  return true;
}
   
};