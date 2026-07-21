// Last updated: 7/21/2026, 4:35:13 PM

class Solution {
public:
    void reverseString(vector<char>& s) {
  vector <char> ans;

  for(int i=0; i< s.size(); i++){
    ans.push_back(s[s.size()-1-i]);
  }
s=ans;
         }
};