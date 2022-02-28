// LeetCode 1315. Sum of Nodes with Even-Valued Grandparent
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