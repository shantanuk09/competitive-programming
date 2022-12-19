// LeetCode 538. Convert BST to Greater Tree
class Solution{
public:
    int value = 0;

    TreeNode* convertBST(TreeNode* root){
        if(root == NULL) return NULL;
        if(root -> right) convertBST(root -> right);
        value = root -> val = value + root -> val;
        if(root -> left) convertBST(root -> left);
        return root;
    }
};