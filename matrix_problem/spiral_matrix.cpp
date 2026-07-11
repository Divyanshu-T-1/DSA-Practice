// Problem: Sprial Matrix, LeetCode 54
// Time Complexity: O(m * n)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> ans;

        int rowBegin = 0;
        int rowEnd = rows - 1;
        int colBegin = 0;
        int colEnd = cols - 1;

        while(rowBegin <= rowEnd && colBegin <= colEnd) {

            // Traverse Right
            for(int j = colBegin; j <= colEnd; j++ ){
                ans.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;

            // Traverse Down
            for(int i = rowBegin; i <= rowEnd; i++) {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;

            //Traverse Left
            if(rowBegin <= rowEnd){
                for(int j = colEnd; j >= colBegin; j--) {
                    ans.push_back(matrix[rowEnd][j]);
                }
                rowEnd--;
            }

            // Traverse Up
            if(colBegin <= colEnd) {
                for(int i = rowEnd; i >= rowBegin; i--) {
                    ans.push_back(matrix[i][colBegin]);
                }
                colBegin++;
            }
        }

        return ans;
    
              
    }
};