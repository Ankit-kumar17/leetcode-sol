// Last updated: 7/21/2026, 4:35:32 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
      int ans =0;

      for(int i=0; i< nums.size(); i++){
        ans = ans ^ nums[i];
      }

return ans;
    }
};