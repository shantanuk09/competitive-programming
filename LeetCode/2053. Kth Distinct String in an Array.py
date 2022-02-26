# 2053. Kth Distinct String in an Array
# Using list comprehension.
class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        lt = [string for string in arr if arr.count(string) == 1]
        if len(lt) < k : 
            return ""
        else :
            return lt[k - 1]

# Using Counter.
class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        freq = Counter(arr)
        for string in arr :
            if freq[string] == 1 : k -= 1
            if k == 0 : return string
        return ""