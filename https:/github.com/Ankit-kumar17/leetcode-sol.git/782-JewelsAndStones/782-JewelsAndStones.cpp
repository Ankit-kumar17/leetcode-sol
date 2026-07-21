// Last updated: 7/21/2026, 4:34:59 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count =0;
       for(int i=0; i< jewels.size(); i++){
        for(int j=0; j<stones.size(); j++){
            if(jewels[i] == stones[j]){
                count++;
            }
        }
       }
       return count;
    }
};