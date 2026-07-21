// Last updated: 7/21/2026, 4:34:36 PM
class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            count++;
        }
        return count;
    }
};