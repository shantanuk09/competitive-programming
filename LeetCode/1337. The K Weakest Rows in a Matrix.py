# LeetCode 1337. The K Weakest Rows in a Matrix
# Add the index value to the end of each row and sort.
class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        list = []
        for i in range(0, len(mat)) : 
            mat[i].append(i)
        mat.sort()
        for i in range(0, k) : 
            list.append(mat[i][-1])
        return list