class Solution:
    def peakIndexInMountainArray(self, A: List[int]) -> int:
        if len(A)<3:
            return -1
        return A.index(max(A))
