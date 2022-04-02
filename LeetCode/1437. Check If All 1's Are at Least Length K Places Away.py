# LeetCode 1437. Check If All 1's Are at Least Length K Places Away
class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        if nums.count(1) == 0 : return True
        last = 0
        for i in range(0, len(nums)) : 
            if nums[i] :
                index = i
                break
        for i in range(index + 1, len(nums)) : 
            if nums[i] and i - last > k : last = i
            elif nums[i] : return False
        return True