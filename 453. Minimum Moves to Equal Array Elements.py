class Solution:
    def minMoves(self, nums: List[int]) -> int:
        s=min(nums)
        nums.sort()
        ans=0
        for i in nums:
            ans+=i-s
        return ans
        
