// Problem: Set Matrix Zeros, LeetCode 73
// Approach: Create two array to store which rows 
//ans coulmns become zero than marked them as 
//[row] = 1, col[j] = 1 then make them zero finally

// Time Complexity: O(m * n)
// Space Complexity: O(m + n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Store which rows ans columns need to be zero
        vector<int> row(rows, 0);
        vector<int> col(cols, 0);

        // Mark which row and column should be zero
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Make the marked rows and columns zero
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }

        
    }
};