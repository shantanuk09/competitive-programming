# LeetCode 121. Best Time to Buy and Sell Stock
# Dynamic Programming.
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        arr, profit, maxProfit = [0] * len(prices), [0] * len(prices), 0
        for i in range(1, len(prices)) : 
            arr[i] = prices[i] - prices[i - 1]
        for i in range(1, len(arr)) : 
            profit[i] = max(profit[i - 1] + arr[i], arr[i])
            maxProfit = max(maxProfit, profit[i])
        return maxProfit
            
# Two Pointer.
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left, right, maxProfit = 0, 1, 0
        while right < len(prices) : 
            profit = prices[right] - prices[left]
            if prices[left] < prices[right] : maxProfit = max(maxProfit, profit)
            else : left = right
            right += 1
        return maxProfit