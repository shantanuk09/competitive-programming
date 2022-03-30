# LeetCode 1196. How Many Apples Can You Put into the Basket
# Greedy Approach.
class Solution:
    def maxNumberOfApples(self, weight: List[int]) -> int:
        capacity = 5000
        count = 0
        weight.sort()
        for w in weight : 
            if w <= capacity :
                count += 1
                capacity -= w
            else : break
        return count