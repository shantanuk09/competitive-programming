# LeetCode 1160. Find Words That Can Be Formed by Characters
# Compare counters.
class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        count = 0
        c = Counter(chars)
        for word in words : 
            d = Counter(word)
            if d <= c : count += len(word)
        return count