// LeetCode 124. Binary Tree Maximum Path Sum
// DFS.
class Solution{
public:
    int maxSum;

    int maxPathSum(TreeNode* root){
        maxSum = INT_MIN;
        gainFromSubtree(root);
        return maxSum;
    }

    int gainFromSubtree(TreeNode *root){
        if(root == NULL) return 0;
        int gainFromLeft = max(gainFromSubtree(root -> left), 0);
        int gainFromRight = max(gainFromSubtree(root -> right), 0);
        maxSum = max(maxSum, gainFromLeft + gainFromRight + root -> val);
        return max(gainFromLeft + root -> val, gainFromRight + root -> val);
    }
};
