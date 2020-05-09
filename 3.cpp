/*3. Longest Substring Without Repeating Characters

Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.*/
             
            
            
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1){
            return 1;
        }
        if (s.size() == 0){
            return 0;
        }
        int temp ;
        int max = 0;
        for( int i = 0; i < s.size(); i++){
            string sub;
            sub.push_back(s[i]);
            
                   
            temp = 1;
            
            for (int j = i + 1; j < s.size(); j++){
                
                if (sub.find(s[j]) !=string:: npos){
                    string sub;
                    if (temp > max)
                        max = temp;
                    temp = 1;
                    break;
                    
                }
                else{ 
                    temp+=1;
                    if (temp > max)
                        max = temp;
                    sub.push_back(s[j]);
                    
                }
            }
            
        }
        
        return max;
    }
};
