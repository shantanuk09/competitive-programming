# LeetCode 747. Largest Number At Least Twice of Others
class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        largest = -1
        secondLargest = -1
        index = -1
        for i in range(len(nums)) : 
            if nums[i] > largest : 
                secondLargest = largest
                largest = nums[i]
                index = i
            elif nums[i] > secondLargest : secondLargest = nums[i]
        if largest >= 2 * secondLargest : return index 
        else : return -1