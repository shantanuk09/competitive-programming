// LeetCode 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original == NULL) return NULL;
        else if(original == target) return cloned;
        TreeNode* left = getTargetCopy(original -> left, cloned -> left, target);
        TreeNode* right = getTargetCopy(original -> right, cloned -> right, target);
        if(left) return left;
        else return right;
    }
};