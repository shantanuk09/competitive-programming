# LeetCode 2085. Count Common Words With One Occurrence
class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        count, count1, count2 = 0, Counter(words1), Counter(words2)
        for word in words1 : 
            if word in words2 and count1[word] == count2[word] == 1 : count += 1
        return count