// LeetCode 129. Sum Root to Leaf Numbers
// DFS.
class Solution{
public:
    int rootToLeafSum = 0;

    void helper(TreeNode *root, int currentNumber){
        if(root -> left == NULL && root -> right == NULL){
            rootToLeafSum += 10 * currentNumber + root -> val;
            return;
        }
        if(root -> left) helper(root -> left, 10 * currentNumber + root -> val);
        if(root -> right) helper(root -> right, 10 * currentNumber + root -> val);
    }

    int sumNumbers(TreeNode* root){
        helper(root, 0);
        return rootToLeafSum;
    }
};
