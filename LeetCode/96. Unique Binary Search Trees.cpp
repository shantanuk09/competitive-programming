// LeetCode 96. Unique Binary Search Trees
class Solution{
public:
    int numTrees(int n){
        int arr[n + 1];
        memset(arr, 0, sizeof(arr));
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2; i <= n; i++)
            for(int j = 1; j <= i; j++)
                arr[i] += arr[j - 1] * arr[i - j];
        return arr[n];
    }
};