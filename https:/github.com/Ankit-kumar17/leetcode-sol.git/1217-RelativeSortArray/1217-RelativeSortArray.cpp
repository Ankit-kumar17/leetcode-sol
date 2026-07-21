// Last updated: 7/21/2026, 4:34:52 PM
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int,int> freq;
        
        for(int num : arr1){
            freq[num]++;
        }

        vector<int> ans;

        for(int num : arr2){
            while(freq[num] > 0){
                ans.push_back(num);
                freq[num]--;
            }
        }

        vector<int> remaining;

        for(auto it : freq){
            while(it.second > 0){
                remaining.push_back(it.first);
                it.second--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for(int num : remaining){
            ans.push_back(num);
        }

        return ans;
    }
};