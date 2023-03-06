// LeetCode 311. Sparse Matrix Multiplication
class Solution{
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2){
        int m = mat1.size();
        int n = mat2[0].size();
        vector<vector<int>> answer(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int sum = 0;
                for(int k = 0; k < mat1[0].size(); k++)
                    sum += mat1[i][k] * mat2[k][j];
                answer[i][j] = sum;
            }
        }
        return answer;
    }
};