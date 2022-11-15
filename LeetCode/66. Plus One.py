# LeetCode 66. Plus One
# Simulate.
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 1
        arr = []
        for i in range(len(digits) - 1, -1, -1) : 
            arr.append((digits[i] + carry) % 10)
            carry = (digits[i] + carry) // 10
        if carry : arr.append(carry)
        return reversed(arr)