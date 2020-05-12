/*Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1*/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        if (nums.size() == 1){
            if (nums[0] !=target){
                return -1;
            }
            else
                
                return 0;
        }  
            
        
            
                
        while(i < j){
            if ( nums[i] == target) return i;
            if ( nums[j] == target) return j;
                
            if (nums[i] < nums[j]) i++;
            else j--;
        }
        return -1;
    }
};
