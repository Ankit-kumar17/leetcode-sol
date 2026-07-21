// Last updated: 7/21/2026, 4:36:03 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int slow =0;
     int fast =1;

while(fast<=nums.size()-1){
if(nums[slow] != nums[fast]){
    slow++;
    nums[slow] = nums[fast];

}
else if(nums[slow] ==nums[fast]){
    
}
 fast++;
}
return slow+1;
    }
    
};