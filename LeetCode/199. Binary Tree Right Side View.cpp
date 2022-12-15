// LeetCode 199. Binary Tree Right Side View
// DFS. Exploit the order of recursive calls.
class Solution{
public:
    void DFS(TreeNode *root, vector<int> &values, int depth){  
        if(root == NULL) return;
        if(depth >= values.size()) values.push_back({});
        values[depth] = root -> val;
        DFS(root -> left, values, depth + 1);
        DFS(root -> right, values, depth + 1);
    }

    vector<int> rightSideView(TreeNode* root){
        vector<int> values;
        DFS(root, values, 0);
        return values;
    }
};
