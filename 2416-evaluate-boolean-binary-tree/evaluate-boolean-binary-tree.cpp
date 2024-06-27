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
    bool evaluateTree(TreeNode* root) {
        
        if (!root->right)return root->val;

        if (root->val == 2)
            return evaluateTree(root->right) || evaluateTree(root->left);
        else if(root->val == 3)
            return evaluateTree(root->right) && evaluateTree(root->left);
            return 0;
    }
};