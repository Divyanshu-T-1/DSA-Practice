// Problem: Search a 2D Matrix, LeetCode: 74
// Approach: Treat matrix as a virtual sorted 1D array and apply Binary Search
// Time Complexity: O(log(m * n))
// Space Complexity: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0;
        int end = m * n - 1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            int row = mid / n;
            int col = mid % n;

            if(matrix[row][col] == target) {
                return true;
            } else if(matrix[row][col] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    
    return false;

        
    }
};