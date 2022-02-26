# 1217. Minimum Cost to Move Chips to The Same Position
class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        even, odd = 0, 0
        for e in position : 
            if e % 2 : odd += 1
            else : even += 1
        return min(even, odd)