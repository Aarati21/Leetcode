/*240. Search a 2D Matrix II

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
Example:

Consider the following matrix:

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.*/




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() ;
        if (m == 0)
            return false;
        int n = matrix[0].size() ;
        int i = 0;
        
        while(i < m){

            int low = 0;
            int high = n - 1;
            while (low <= high){
                
                int mid = low + (high-low)/2;
                
                if (matrix[i][mid] == target)
                    return true;
                if (matrix[i][mid] < target){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                    n = mid;
                    
                }
            }
            i++;
        }
        return false;
                
        
    }
    
};

