# 2169. Count Operations to Obtain Zero
class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        if num1 * num2 == 0 : 
            return 0
        else :
            return num1 // num2 + self.countOperations(num2, num1 % num2)
        