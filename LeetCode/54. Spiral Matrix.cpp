// LeetCode 54. Spiral Matrix
// Simulate. 
class Solution{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int m = matrix.size(), n = matrix[0].size(), i = 0, j = 0, big = 9999;
        vector<int> vr;
        while(1){
            // Go right.
            while(j < n && matrix[i][j] != big){
                vr.push_back(matrix[i][j]);
                matrix[i][j] = big;
                j++;
            }
            i++, j--;
            if(vr.size() == m * n) return vr;
            // Go down.
            while(i < m && matrix[i][j] != big){
                vr.push_back(matrix[i][j]);
                matrix[i][j] = big;
                i++;
            }
            i--, j--;
            if(vr.size() == m * n) return vr;
            // Go left.
            while(j >= 0 && matrix[i][j] != big){
                vr.push_back(matrix[i][j]);
                matrix[i][j] = big;
                j--;
            }
            i--, j++;
            if(vr.size() == m * n) return vr;
            // Go up.
            while(i >= 0 && matrix[i][j] != big){
                vr.push_back(matrix[i][j]);
                matrix[i][j] = big;
                i--;
            }
            i++, j++;
            if(vr.size() == m * n) return vr;
        }
        return vr;
    }
};