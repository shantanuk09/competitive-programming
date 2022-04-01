# LeetCode 1399. Count Largest Group
class Solution:
    def countLargestGroup(self, n: int) -> int:
        mapping = {}
        big = 0
        for i in range(1, n + 1) : 
            e = i
            sum = 0
            while e :
                sum += e % 10
                e //= 10
            if sum not in mapping : mapping[sum] = 1
            else : mapping[sum] += 1
        for key, value in mapping.items() : 
            if value > big : 
                count = 1
                big = value
            elif value == big : 
                count += 1
        return count