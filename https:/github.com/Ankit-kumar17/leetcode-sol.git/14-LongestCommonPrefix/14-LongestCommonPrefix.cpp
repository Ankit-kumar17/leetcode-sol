// Last updated: 7/21/2026, 4:36:09 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1;i<strs.size();++i){
            while(strs[i].find(prefix)){
                prefix.pop_back();
            }
        }
        return prefix;
    }
};