// Leetcode: 543, Diameter of Binary Tree
// Pattern: DFS
// Time Complexity: O(n)
// Auxiliary Space: O(n)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root, int& ans) {
        if(root == NULL) {
            return 0;
        }
        int left = height(root->left, ans);
        int right = height(root->right, ans);

        // calculate diameter
        ans = max(ans, left + right);

        // return height to parent
        return 1 + max(left, right);

    }
    int diameterOfBinaryTree(TreeNode* root) { 
        int ans = 0;
        height(root, ans);
        return ans;   
        
    }
};