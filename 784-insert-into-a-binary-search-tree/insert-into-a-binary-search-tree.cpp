class Solution {
public:
    const int right = 0;
    const int left = 1;
    void insert(TreeNode* cur, TreeNode* last, int val,int type) {
        if (!cur) {
            if (type == right) last->right = new TreeNode(val);
            if (type == left) last->left = new TreeNode(val);
            return;
        }
        if (cur->val < val) {
            insert(cur->right,cur, val,right);
        }
        if (cur->val > val) {
            insert(cur->left,cur, val,left);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            root = new TreeNode(val);
            return root;
        }
        insert(root, nullptr, val, 0);
        return root;
    }
};