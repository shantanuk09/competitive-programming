// LeetCode 105. Construct Binary Tree from Preorder and Inorder Traversal
class Solution{
public:
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, int &rootIndex, int left, int right){
        if(left > right) return NULL;
        int pivot = left;
        while(inorder[pivot] != preorder[rootIndex])
            pivot++;
        rootIndex++;
        TreeNode *node = new TreeNode(inorder[pivot]);
        node -> left = build(preorder, inorder, rootIndex, left, pivot - 1);
        node -> right = build(preorder, inorder, rootIndex, pivot + 1, right);
        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        int rootIndex = 0;
        return build(preorder, inorder, rootIndex, 0, inorder.size() - 1);
    }
};