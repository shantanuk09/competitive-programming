// LeetCode 1120. Maximum Average Subtree
class Solution{
public:
    double average = 0;

    double getSum(TreeNode *root){
        if(!root) return 0;
        double left = getSum(root -> left);
        int leftCount = getCount(root -> left);
        double right = getSum(root -> right);
        int rightCount = getCount(root -> right);
        average = max(average, 1.0 * (root -> val + left + right) / (1 + leftCount + rightCount));
        average = max(average, 1.0 * left / leftCount);
        average = max(average, 1.0 * right / rightCount);
        return root -> val + left + right;
    }

    int getCount(TreeNode *root){
        if(!root) return 0;
        else return 1 + getCount(root -> left) + getCount(root -> right);
    }

    double maximumAverageSubtree(TreeNode* root){
        getSum(root);
        return average;
    }
};