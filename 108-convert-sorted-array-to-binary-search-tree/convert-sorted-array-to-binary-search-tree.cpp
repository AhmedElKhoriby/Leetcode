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
TreeNode* rec(vector<int>& nums,int i , int j) {
    if (i > j) return nullptr;
    int idx = (i + j) / 2;
    int new_val = nums[idx];
    TreeNode* root = new TreeNode(new_val);
    root->left = rec(nums, i, idx - 1);
    root->right= rec(nums, idx + 1, j);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return rec(nums, 0, nums.size() - 1);
}
};