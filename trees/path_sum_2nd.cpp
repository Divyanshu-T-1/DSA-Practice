// Problem: Leetcode 113. Path Sum 2nd
// Pattern: DFS
// Time Complexity: O (n + K * h) : where k = no. of 
// valid pathe from root to leaf and h : tree height
// Space complexity: O(n)


class Solution {
public:
    void solve(TreeNode* root, int targetSum, int sum, vector<int>& path, vector<vector<int>>& ans) {
        if(root == NULL) {
            return;
        }
        sum += root->val;
        path.push_back(root->val);

        if(root->left == NULL && root->right == NULL) {
            if(sum == targetSum) {
                ans.push_back(path);
            }
            path.pop_back();
            return;
        }

        solve(root->left, targetSum, sum, path, ans);
        solve(root->right, targetSum, sum, path, ans);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> ans;
        solve(root, targetSum, 0, path, ans);

        return ans;

    }
};