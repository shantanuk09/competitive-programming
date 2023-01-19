// LeetCode 2196. Create Binary Tree From Descriptions
class Solution{
public:
    TreeNode* build(int rootValue, unordered_map<int, int> &left, unordered_map<int, int> &right){
        TreeNode *root = new TreeNode(rootValue);
        int leftValue = left[rootValue];
        int rightValue = right[rootValue];
        if(leftValue) root -> left = build(leftValue, left, right);
        if(rightValue) root -> right = build(rightValue, left, right);
        return root;
    }

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions){
        int rootValue;
        unordered_set<int> children;
        unordered_map<int, int> left, right;
        for(auto d : descriptions){
            children.insert(d[1]);
            if(d[2] == 1) left[d[0]] = d[1];
            else right[d[0]] = d[1];
        }
        for(auto d : descriptions)
            if(children.find(d[0]) == children.end()) rootValue = d[0];
        return build(rootValue, left, right);
    }
};