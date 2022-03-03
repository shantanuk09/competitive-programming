# LeetCode 1441. Build an Array With Stack Operations
class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        arr = []
        for i in range(1, max(target) + 1) : 
            arr.append("Push")
            if i not in target : 
                arr.append("Pop")
        return arr
        