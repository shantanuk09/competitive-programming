# LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution:
    def average(self, salary: List[int]) -> float:
        return (sum(salary) - max(salary) - min(salary)) / (len(salary) - 2)

# One pass.
class Solution:
    def average(self, salary: List[int]) -> float:
        s, maximum, minimum = 0, - math.inf, math.inf
        for e in salary :
            maximum = max(maximum, e)
            minimum = min(minimum, e)
            s += e
        return (s - maximum - minimum) / (len(salary) - 2)