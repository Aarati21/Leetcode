/*42. Trapping Rain Water
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.


The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped. Thanks Marcos for contributing this image!

Example:

Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6*/




class Solution {
public:
    int trap(vector<int>& height){
	if(height.empty())
		return 0;
    int area = 0;
    
    vector<int> left(height.size());
    vector<int> right(height.size());
        
    left[0] = height[0];
    for (int i = 1; i < height.size(); i++) {
        left[i] = max(height[i], left[i - 1]);
    }
    right[height.size() - 1] = height[height.size() - 1];
    for (int i = height.size() - 2; i >= 0; i--) {
        right[i] = max(height[i], right[i + 1]);
    }
    for (int i = 1; i < height.size() - 1; i++) {
        area += min(left[i], right[i]) - height[i];
    }
    return area;
}
