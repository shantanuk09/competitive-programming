// LeetCode 1448. Count Good Nodes in Binary Tree
// DFS.
class Solution{
public:
    int good = 0;

    void DFS(TreeNode* root, int rootValue){
        if(root == NULL) return;
        if(root -> val >= rootValue) good++;
        DFS(root -> left, max(rootValue, root -> val));
        DFS(root -> right, max(rootValue, root -> val));
    }

    int goodNodes(TreeNode* root){
        DFS(root, root -> val);
        return good;
    }
};
