// LeetCode 508. Most Frequent Subtree Sum
class Solution{
public:
    int findSubtreeSum(TreeNode *root, unordered_map<int, int> &frequency, int &maxFreq){
        if(root == NULL) return 0;
        int left = findSubtreeSum(root -> left, frequency, maxFreq);
        int right = findSubtreeSum(root -> right, frequency, maxFreq);
        int sum = root -> val + left + right;
        frequency[sum]++;
        maxFreq = max(maxFreq, frequency[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root){
        int maxFreq = 0;
        unordered_map<int, int> frequency;
        vector<int> answer;
        findSubtreeSum(root, frequency, maxFreq);
        for(auto [key, value] : frequency)
            if(value == maxFreq) answer.push_back(key);
        return answer;
    }
};