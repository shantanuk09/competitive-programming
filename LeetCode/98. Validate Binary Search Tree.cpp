// LeetCode 98. Validate Binary Search Tree
// DFS.
class Solution{
public:
    bool helper(TreeNode *root, long long low, long high){
        if(root == NULL) return true;
        if(root -> val <= low || high <= root -> val) return false;
        return helper(root -> left, low, root -> val) && helper(root -> right, root -> val, high);
    }

    bool isValidBST(TreeNode* root){
        // LONG_LONG_MIN & LONG_LONG_MAX exist too.
        return helper(root, LONG_MIN, LONG_MAX);
    }
};
