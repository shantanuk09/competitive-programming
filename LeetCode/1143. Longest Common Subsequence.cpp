// LeetCode 1143. Longest Common Subsequence
// Dynamic Programming
class Solution {
public:
    int LCS(string text1, int m, string text2, int n){
        int arr[m + 1][n + 1];
        memset(arr, 0, sizeof(arr));
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(text1[i - 1] == text2[j - 1]) arr[i][j] = 1 + arr[i - 1][j - 1];
                else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        return arr[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        return LCS(text1, text1.size(), text2, text2.size());
    }
};