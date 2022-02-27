// 1302. Deepest Leaves Sum
class Solution {
public:
    int sum = 0, deepest = 0;
    int deepestLeavesSum(TreeNode* root, int depth = 0){
        if(!root) return 0;
        if(!root -> left && !root -> right && depth == deepest) sum += root -> val;
        else if(!root -> left && !root -> right && depth > deepest) deepest = depth, sum = root -> val;
        deepestLeavesSum(root -> left, depth + 1);
        deepestLeavesSum(root -> right, depth + 1);
        return sum;
    }
};