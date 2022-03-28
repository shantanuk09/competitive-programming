# LeetCode 2215. Find the Difference of Two Arrays
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        arr = [[], []]
        nums1, nums2 = set(nums1), set(nums2)
        for n in nums1 : 
            if n not in nums2 : arr[0].append(n)
        for n in nums2 : 
            if n not in nums1 : arr[1].append(n)
        return arr