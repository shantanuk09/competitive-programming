# LeetCode 1207. Unique Number of Occurrences
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        st = set()
        for e in arr : 
            st.add(arr.count(e))
        if len(st) == len(set(arr)) : return True
        else : False