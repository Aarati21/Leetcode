/*14. Longest Common Prefix
Easy

2316

1771

Add to List

Share
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/








class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result;
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        for (int j = 0; j < strs[0].size(); j++){
            for (int i = 1; i < strs.size(); i++){
                if (j >= strs[i].size()){
                    return result;
                }
                if (strs[0][j] != strs[i][j]){
                    if (j == 0)
                        return "";
                    
                    else
                       
                        return result;
                        
                }
            }
            result.push_back(strs[0][j]);
            
        }
        return result;
       
    } 
    
};
