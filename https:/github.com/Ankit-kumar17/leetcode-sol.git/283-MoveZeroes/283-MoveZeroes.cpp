// Last updated: 7/21/2026, 4:35:18 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector <int> ans;
for(int i=0; i<nums.size(); i++){
    if(nums[i] != 0){
        ans.push_back(nums[i]);
    }
    
}

for(int i = 0; i<nums.size(); i++){
    if(nums[i] == 0){
        ans.push_back(nums[i]);
    }
}

nums = ans;

    }
};