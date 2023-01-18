// LeetCode 1833. Maximum Ice Cream Bars
class Solution{
public:
    int maxIceCream(vector<int>& costs, int coins){
        int ice = 0;
        map<int, int> prices;
        for(auto cost : costs)
            prices[cost] += 1;
        for(auto [price, count] : prices){
            if(coins >= price){
                int bought = min(coins / price, count);
                ice += bought;
                coins -= price * bought;
            }
            else break;
        }
        return ice;
    }
};