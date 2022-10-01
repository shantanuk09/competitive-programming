# LeetCode 1742. Maximum Number of Balls in a Box
class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        dict = {}
        maxBalls = 0
        for ball in range(lowLimit, highLimit + 1) : 
            sum = 0
            while ball : 
                sum += ball % 10
                ball //= 10
            if sum in dict : 
                dict[sum] += 1
            else :
                dict[sum] = 1
            maxBalls = max(maxBalls, dict[sum])
        return maxBalls