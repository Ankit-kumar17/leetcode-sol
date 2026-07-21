// Last updated: 7/21/2026, 4:34:44 PM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
    string ans =s;

    for(int i=0; i< s.size(); i++){
        ans[indices[i]] = s[i];
    }
    return ans;
    }
};