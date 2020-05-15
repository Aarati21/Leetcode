/*41. First Missing Positive


Share
Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
Note:

Your algorithm should run in O(n) time and uses constant extra space.
*/


















class Solution {
public:
   
    int firstMissingPositive(vector<int>& nums) {
        if (nums.empty())
            return 1;
        int n = nums.size();
        
        vector<int> exists(n+1, 0);
        for(int i = 0; i < n; i++){
            if (nums[i] > 0 && nums[i] <=n){
                
                exists[nums[i]] = 1;
            }
        }
        for(int i = 1; i <=n; i++ ){
            if(!exists[i]){
               return i;      
            }
        }
        return n+1;
    }
};
