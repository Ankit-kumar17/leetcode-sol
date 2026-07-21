// Last updated: 7/21/2026, 4:35:35 PM
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);

string clean;
for(int i=0; i<s.size(); i++){
    if(isalnum(s[i])){
        clean += tolower(s[i]);
    }
}
int left =0;
int right =clean.size()-1;
while(left < right){
    if(clean[left] != clean[right]){
        return false;
    }
    left++;
    right--;
}
return true;
    }
};