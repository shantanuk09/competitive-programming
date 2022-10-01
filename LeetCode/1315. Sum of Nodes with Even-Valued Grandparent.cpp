// LeetCode 1315. Sum of Nodes with Even-Valued Grandparent
// BFS.
class Solution {
public:
    int sumEvenGrandparent(TreeNode* root){
        int sum = 0;
        queue<TreeNode*> qe;
        qe.push(root);
        while(qe.size()){
            TreeNode* node = qe.front();
            qe.pop();
            if(node -> left) qe.push(node -> left);
            if(node -> right) qe.push(node -> right);
            if(node -> val % 2 == 0){
                if(node -> left && node -> left -> left) sum += node -> left -> left -> val;
                if(node -> left && node -> left -> right) sum += node -> left -> right -> val;
                if(node -> right && node -> right -> left) sum += node -> right -> left -> val;
                if(node -> right && node -> right -> right) sum += node -> right -> right -> val;
            }
        }
        return sum;
    }
};

// Recursion.
class Solution{
public:
    int sumEvenGrandparent(TreeNode* root){
        int sum = 0;
        if(!root) return 0;
        else if(root -> val % 2 == 0){
            if(root -> left && root -> left -> left) sum += root -> left -> left -> val;
            if(root -> left && root -> left -> right) sum += root -> left -> right -> val;
            if(root -> right && root -> right -> left) sum += root -> right -> left -> val;
            if(root -> right && root -> right -> right) sum += root -> right -> right -> val;
        }
        return sum + sumEvenGrandparent(root -> left) + sumEvenGrandparent(root -> right);
    }
};