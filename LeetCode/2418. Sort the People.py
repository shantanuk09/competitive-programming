# LeetCode 2418. Sort the People
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        arr = []
        for height, name in zip(heights, names) : 
            arr.append([height, name])
        arr.sort(reverse = True)
        return [name for height, name in arr]

        