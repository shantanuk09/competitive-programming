// LeetCode 1143. Longest Common Subsequence
// Dynamic Programming.
class Solution {
public:
    // arr[i][j] represents the length of the longest common subsequence for text1[0..i-1] and text2[0..j-1]
    int LCSLength(string text1, int m, string text2, int n, int arr[][1005]){
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(text1[i - 1] == text2[j - 1]) arr[i][j] = 1 + arr[i - 1][j - 1];
                else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        return arr[m - 1][n - 1];
    }

    string LCSString(string text1, int m, string text2, int n, int arr[][1005]){
        if(m == 0 || n == 0) return "";
        if(text1[m - 1] == text2[n - 1]) return text1[m - 1] + LCSString(text1, m - 1, text2, n - 1, arr);
        if(arr[m - 1][n] > arr[m][n - 1]) return LCSString(text1, m - 1, text2, n, arr);
        else return LCSString(text1, m, text2, n - 1, arr);
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size(), arr[1005][1005];
        memset(arr, 0, sizeof(arr));
        LCSLength(text1, m, text2, n, arr);
        return LCSString(text1, m, text2, n, arr).size();
    }
};