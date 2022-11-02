// LeetCode 74. Search a 2D Matrix
// Binary Search
class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0; i < m; i++)
            if(matrix[i][0] <= target && target <= matrix[i][n - 1]) return binary_search(matrix[i].begin(), matrix[i].end(), target);
        return false;
    }
};