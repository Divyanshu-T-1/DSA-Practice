// Problem: Container With Most Water
// Platform: LeetCode 11.
// Pattern: Two Pointer 
// Approach: Start with maximum width, then try to incerase
// the limiting height while traking the maximum area
// Time Complexity: O(n) 
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while(left < right) {
            int width = right - left;
            // calculating the area with minimum height to maintain max water
            int area = width * min(height[left], height[right]);
            // update max area
            maxArea = max(maxArea, area);

            if(height[left] < height[right]) {
                left++;
            } 
            else {
                right--;
            }
        }

        return maxArea;
        
    }
};