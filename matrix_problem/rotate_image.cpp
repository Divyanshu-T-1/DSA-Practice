// Problem: Rotate Image, LeetCode 48
// Approach: Take transpose of the matrix and
// reverse the first ans last column

// Time Complexity: O(m * n)
// Space Complexity: O(m + n)


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int rows = matrix.size();

    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < rows; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
        
    }
};