// Last updated: 7/21/2026, 4:34:54 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> ans;

        string first = words[0];

        for(int i = 0; i < first.size(); i++) {

            char ch = first[i];

            bool common = true;

            for(int j = 1; j < words.size(); j++) {

                size_t pos = words[j].find(ch);

                if(pos == string::npos) {
                    common = false;
                    break;
                }

                words[j].erase(pos, 1);
            }

            if(common) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};