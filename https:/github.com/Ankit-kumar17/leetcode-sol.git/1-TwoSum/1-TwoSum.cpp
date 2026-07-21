// Last updated: 7/21/2026, 4:36:25 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  for(int i=0; i<nums.size(); i++){
    for(int j=i+1; j<nums.size(); j++){
        if(nums[i] +nums[j] == target){
            return {i,j};
        }
    }
  }
  return {};
    }
};