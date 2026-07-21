// Last updated: 7/21/2026, 4:35:26 PM
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

unordered_map<int,int> freq;

for( int i=0; i<nums.size(); i++){
    freq[nums[i]]++;

    if(freq[nums[i]] > nums.size()/2){
        return nums[i];
    }
}
return -1;

    }
};