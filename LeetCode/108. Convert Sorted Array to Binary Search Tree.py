# LeetCode 108. Convert Sorted Array to Binary Search Tree
# Binary Search.
class Solution:
    def helper(self, nums: List[int], left: int, right: int) -> TreeNode:
        if left > right : return None
        middle = (left + right) // 2
        root = TreeNode(nums[middle])
        root.left = self.helper(nums, left, middle - 1)
        root.right = self.helper(nums, middle + 1, right)
        return root

    def sortedArrayToBST(self, nums: List[int], index = 0) -> Optional[TreeNode]:
        return self.helper(nums, 0, len(nums) - 1)
        