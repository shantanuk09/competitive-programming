# LeetCode 2574. Left and Right Sum Differences
class Solution:
    def leftRigthDifference(self, nums: List[int]) -> List[int]:
        left = 0
        right = 0
        leftSum = len(nums) * [0]
        rightSum = len(nums) * [0]
        answer = []
        for i in range(0, len(leftSum)) : 
            leftSum[i] = left
            left += nums[i]
        for i in range(len(rightSum) - 1, -1, -1) : 
            rightSum[i] = right
            right += nums[i]
        for i in range(0, len(nums)) : 
            answer.append(abs(leftSum[i] - rightSum[i]))
        return answer