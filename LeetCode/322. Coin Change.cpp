// LeetCode 322. Coin Change
// Dynamic Programming
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int arr[++amount];
        arr[0] = 0;
        for(int i = 1; i < amount; i++){
            arr[i] = INT_MAX;
            for(int coin : coins){
                if(i - coin < 0) break;
                if(arr[i - coin] != INT_MAX) arr[i] = min(arr[i - coin] + 1, arr[i]);
            }
        }
        return (arr[--amount] != INT_MAX) ? (arr[amount]) : -1;
    }
};