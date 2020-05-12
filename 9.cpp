/*Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) return true;
        if (x < 0) return false;
        if (x > 0){
            int temp = x;
            vector <int> reverse_no;
            int rem;
            
            while (temp ){
                rem = temp % 10;
                temp = temp/10;
                reverse_no.push_back(rem);
               
            }
            
            int n = reverse_no.size();
            for (int i = 0; i < n; i++){
                if (reverse_no[i] != reverse_no[n-1-i])
                    return false;
                
            }
            return true; 
                 
            }
            
        return true;
        }
        
};
