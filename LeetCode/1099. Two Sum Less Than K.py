# LeetCode 1099. Two Sum Less Than K
class Solution:
    def twoSumLessThanK(self, nums: List[int], k: int) -> int:
        nums.sort()
        answer = -1
        left, right = 0, len(nums) - 1
        while left < right : 
            sum = nums[left] + nums[right]
            if sum < k : 
                answer = max(answer, sum)
                left += 1
            else : right -= 1
        return answer