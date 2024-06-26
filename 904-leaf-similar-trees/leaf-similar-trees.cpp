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
    void DFS(TreeNode* root,vector<int>&v) {
        if (!root)return;
        if(!root->right&&!root->left)
            v.push_back(root->val);
        DFS(root->left, v);
        DFS(root->right, v);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        DFS(root1, v1);
        DFS(root2, v2);
        return v1 == v2;
    }
};