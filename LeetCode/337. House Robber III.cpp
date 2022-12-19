// LeetCode 337. House Robber III
// DFS.
class Solution{
public:
    vector<int> helper(TreeNode *node){
        if(node == NULL) return {0, 0};
        vector<int> left = helper(node -> left);
        vector<int> right = helper(node -> right);
        int rob = node -> val + left[1] + right[1];
        int notRob = max(left[0], left[1]) + max(right[0], right[1]);
        return {rob, notRob};
    }

    int rob(TreeNode* root){
        vector<int> answer = helper(root);
        return max(answer[0], answer[1]);
    }
};
