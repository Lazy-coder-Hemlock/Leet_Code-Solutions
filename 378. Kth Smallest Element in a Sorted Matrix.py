class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        l=[j for i in matrix for j in i]
        l.sort()
        return l[k-1]
