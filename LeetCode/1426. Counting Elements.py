# LeetCode 1426. Counting Elements
class Solution:
    def countElements(self, arr: List[int]) -> int:
        answer = 0
        hashSet = set(arr)
        for e in arr : 
            if (e + 1) in hashSet : answer += 1
        return answer