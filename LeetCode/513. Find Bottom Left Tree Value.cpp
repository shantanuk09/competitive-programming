// LeetCode 951. Flip Equivalent Binary Trees
// DFS.
class Solution{
public:
    void helper(TreeNode *root, int depth, vector<int> &leftValues){
        if(root == NULL) return;
        if(depth == leftValues.size()) leftValues.push_back({});
        leftValues[depth] = root -> val;
        helper(root -> right, depth + 1, leftValues);
        helper(root -> left, depth + 1, leftValues);
    }

    int findBottomLeftValue(TreeNode* root){
        vector<int> leftValues;
        helper(root, 0, leftValues);
        return leftValues.back();
    }
};
