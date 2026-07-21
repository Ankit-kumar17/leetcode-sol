// Last updated: 7/21/2026, 4:34:57 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {

     int left =0;
     int right = nums.size()-1;

     while( left <= right){
int mid = (left + right) /2;

if( nums[mid] == target){
    return mid;
}

else if( nums[mid] < target){
    left = mid +1;
}

else{
    right = mid - 1;
}



     }
return -1;
    }
};