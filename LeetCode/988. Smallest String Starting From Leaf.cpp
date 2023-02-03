// LeetCode 988. Smallest String Starting From Leaf
class Solution{
public:
    string smallestFromLeaf(TreeNode* root, string s = ""){
        s = string(1, 'a' + root -> val) + s;
        return root -> left == root -> right ? s : min(root -> left ? smallestFromLeaf(root -> left, s) : "|", root -> right ? smallestFromLeaf(root -> right, s) : "|");
    }
};

