// LeetCode 1780. Check if Number is a Sum of Powers of Three
class Solution{
public:
    bool flag;

    void DFS(int n, long long arr[], int index){
        if(n == 0) flag = true;
        else if(n < 0) return;
        for(int i = index; i >= 0; i--)
            if(n >= arr[i]) DFS(n - arr[i], arr, i - 1);
    }

    bool checkPowersOfThree(int n){
        long long arr[17];
        arr[0] = 1;
        flag = false;
        for(int i = 1; i < 17; i++)
            arr[i] = arr[i - 1] * 3;
        DFS(n, arr, 16);
        return flag;
    }
};