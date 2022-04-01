# LeetCode 412. Fizz Buzz
# Create a mapping.
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        arr = []
        mapping = {3 : "Fizz", 5 : "Buzz"}
        for i in range(1, n + 1) : 
            answer = ""
            for key in mapping.keys() : 
                if i % key == 0 : answer += mapping[key]
            if not answer : answer = str(i)
            arr.append(answer)
        return arr