// Last updated: 7/21/2026, 4:34:32 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int maxWords = 0;

        for(string s : sentences){

            int count = 1;

            for(char c : s){
                if(c == ' ')
                    count++;
            }

            maxWords = max(maxWords, count);
        }

        return maxWords;
    }
};