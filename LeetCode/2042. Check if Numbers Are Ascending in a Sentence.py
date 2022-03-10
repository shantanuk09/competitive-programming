# LeetCode 2042. Check if Numbers Are Ascending in a Sentence
class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        arr = []
        for word in s.split() : 
            if word.isdigit() : 
                arr.append(int(word))
        for i in range(1, len(arr)) : 
            if arr[i] <= arr[i - 1] : return False
        return True