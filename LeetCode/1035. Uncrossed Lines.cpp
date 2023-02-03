// LeetCode 1035. Uncrossed Lines
class Solution{
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2){
        int m = nums1.size(), n = nums2.size();
        int arr[m + 1][n + 1];
        memset(arr, 0, sizeof(arr));
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(nums1[i - 1] == nums2[j - 1]) arr[i][j] = 1 + arr[i - 1][j - 1];
                else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        return arr[m][n];
    }
};