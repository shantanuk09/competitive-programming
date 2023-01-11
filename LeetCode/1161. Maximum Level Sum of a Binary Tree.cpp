// LeetCode 1161. Maximum Level Sum of a Binary Tree
class Solution{
public:
    void calculateLevelSum(TreeNode *root, int depth, vector<long long> &levelSum){
        if(!root) return;
        if(depth == levelSum.size()) levelSum.push_back(root -> val);
        else levelSum[depth] += root -> val;
        calculateLevelSum(root -> left, depth + 1, levelSum);
        calculateLevelSum(root -> right, depth + 1, levelSum);
    }

    int maxLevelSum(TreeNode* root){
        vector<long long> levelSum;
        calculateLevelSum(root, 0, levelSum);
        int answer = max_element(levelSum.begin(), levelSum.end()) - levelSum.begin() + 1;
        return answer;
    }
};