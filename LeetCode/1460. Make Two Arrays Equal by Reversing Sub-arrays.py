# LeetCode 876. Middle of the Linked List
# target and arr should contain the same elements.
class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        m1, m2 = Counter(target), Counter(arr)
        if m1 == m2 : return True
        else : return False
        
# Using sorted.
class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        return sorted(target) == sorted(arr)