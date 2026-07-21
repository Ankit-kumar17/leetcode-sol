// Last updated: 7/21/2026, 4:34:50 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int>freq;
     for(int value:arr){
        freq[value]++;
     }
    unordered_set<int>count;
    for(auto &it:freq){
        count.insert(it.second);
    }
    return freq.size()==count.size();

    }
};