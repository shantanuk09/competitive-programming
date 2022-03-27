# LeetCode 1598. Crawler Log Folder
class Solution:
    def minOperations(self, logs: List[str]) -> int:
        depth = 0
        for command in logs : 
            if command == '../' : depth = max(depth - 1, 0)
            elif command == './' : continue
            else : depth += 1
        return depth