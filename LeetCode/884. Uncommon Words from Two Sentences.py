# LeetCode 884. Uncommon Words from Two Sentences
# Intuitive way.
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        arr, s1, s2 = [], s1.split(), s2.split()
        mapping1, mapping2 = {}, {}
        for word in s1 : 
            if word in mapping1 : mapping1[word] += 1
            else : mapping1[word] = 1
        for word in s2 : 
            if word in mapping2 : mapping2[word] += 1
            else : mapping2[word] = 1
        for word, freq in mapping1.items() : 
            if freq == 1 and word not in mapping2 : arr.append(word)
        for word, freq in mapping2.items() : 
            if freq == 1 and word not in mapping1 : arr.append(word)
        return arr

# Counter
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        count = Counter(s1.split())
        count += Counter(s2.split())
        return [word for word in count if count[word] == 1]