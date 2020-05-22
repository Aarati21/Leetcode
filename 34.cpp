/*34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]*/






class Solution {
public:
    
    vector<int> binarySearch(vector<int> &nums, int l, int r, int target){
        vector < int> sol;
        while (l <=r){
            int m = l + (r - l)/2;
            if (nums[m] == target){
                cout << m << l<< r;
                int n1 = m ;
                int n2 = m ;
                while ((n1 >= l) && (nums[n1] == target)){
                    n1--;
                    
                }
                while ((n2 <= r) && (nums[n2] == target)){
                    n2++;
                    
                }
                sol.push_back(n1+1);
                sol.push_back(n2-1);
                return sol;
                
            }
                
            if (nums[m] < target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        sol.push_back(-1);
        sol.push_back(-1);
        return sol;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> sol = binarySearch(nums, 0, nums.size()-1, target);
       return sol;
    }
};
