// LeetCode 322. Coin Change
// Dynamic Programming
class Solution{
public:
    int coinChange(vector<int>& coins, int amount){
        int arr[amount + 1];
        fill(arr, arr + amount + 1, INT_MAX);
        sort(coins.begin(), coins.end());
        arr[0] = 0;
        for(int i = 1; i <= amount; i++){
            for(auto coin : coins){
                if(i < coin) break;
                if(arr[i - coin] != INT_MAX) arr[i] = min(arr[i], arr[i - coin] + 1);
            }
        }
        return arr[amount] != INT_MAX ? arr[amount] : -1;
    }
};