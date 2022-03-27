# LeetCode 1408. String Matching in an Array
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        st = set()
        for i in range(0, len(words)) : 
            for j in range(0, len(words)) : 
                if i != j and words[i] in words[j] : st.add(words[i])
        return list(st)