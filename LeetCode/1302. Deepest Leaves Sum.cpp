// LeetCode 1302. Deepest Leaves Sum
// Recursion.
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

// BFS.
class Solution{
public:
    int deepestLeavesSum(TreeNode* root){
        int i, sum = 0;
        queue<TreeNode*> qe;
        qe.push(root);
        while(qe.size()){
            for(i = qe.size() - 1, sum = 0; i >= 0; i--){
                TreeNode *node = qe.front();
                qe.pop();
                sum += node -> val;
                if(node -> left) qe.push(node -> left);
                if(node -> right) qe.push(node -> right);
            }
        }
        return sum;
    }
};