# 728. Self Dividing Numbers
class Solution:
    def isSelfDividing(self, number : int) -> bool : 
        n = number
        while number : 
            rem = number % 10
            if rem == 0 or n % rem != 0 : 
                return False
            number //= 10
        return True
    
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        lt = []
        for e in range(left, right + 1) : 
            if self.isSelfDividing(e) : 
                lt.append(e)
        return lt