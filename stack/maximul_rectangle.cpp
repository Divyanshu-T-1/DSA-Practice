// Problem: Maximal Rectangle LeetCode 85
// Approach: Converting matrix to histogram and applying same logic of largest rectangle
// Time Complexity: O(R * C)
// Space Complexity: O(c) where R -> Row, C-> column

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) {
            return 0;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols, 0);
        int maxArea = 0;
        
        for(int row = 0; row < rows; row++) {
            // building histogram
            for(int col = 0; col < cols; col++) {
               if(matrix[row][col] == '1') {
                heights[col] += 1;
               }
               else {
                heights[col] = 0;
               }
                
            }
            // apply logic of largest rectangle as it is
            stack<int> st;
            
            for(int i = 0; i <= cols; i++) {

                while(!st.empty() && (i == cols || heights[i] < heights[st.top()])) {
                    int height = heights[st.top()];
                    st.pop();

                    int width = 0;
                    if(st.empty()) {
                        width = i;
                    } else {
                        width = i - st.top() - 1;
                    }

                    maxArea = max(maxArea, height * width);
                }
               if (i < cols) {
                 st.push(i);
               }
            }
        }

        return maxArea;

        
    }
};