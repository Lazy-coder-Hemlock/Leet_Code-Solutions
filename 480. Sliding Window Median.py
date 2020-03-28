import statistics as s
class Solution:
    def medianSlidingWindow(self, nums: List[int], k: int) -> List[float]:
        return [s.median(nums[i:i+k]) for i in range(len(nums)-k+1)]
