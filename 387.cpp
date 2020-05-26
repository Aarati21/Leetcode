/*387. First Unique Character in a String

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.*/



class Solution {
public:
    int firstUniqChar(string s) {
        if (s.size() == 0)
            return -1;
        if (s.size() == 1)
            return 0;
        unordered_map<char, int> umap;
        for (int i = 0; i < s.size(); i++){
            if (umap.find(s[i]) == umap.end()){
                umap[s[i]] = 1;
            }
            else{
                umap[s[i]]+=1;
            }
        }
        for (int i = 0; i < s.size(); i++){
            if (umap[s[i]] == 1)
                return i;
        }
    return -1;
    }
};
