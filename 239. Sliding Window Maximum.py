class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        return [max(nums[i:k+i]) for i in range(len(nums)-k+1)]
        
