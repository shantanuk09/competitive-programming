// LeetCode 98. Validate Binary Search Tree
// Inorder Traversal.
class Solution{
public:
    void traverse(TreeNode *root, vector<int> &values){
        if(root == NULL) return;
        traverse(root -> left, values);
        values.push_back(root -> val);
        traverse(root -> right, values);
    }

    int kthSmallest(TreeNode* root, int k){
        vector<int> values;
        traverse(root, values);
        return values[k - 1];
    }
};
