class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        if sorted(nums)==nums:
            return 0
        dup=sorted(nums)
        #sorted(nums)
        start=0
        while dup[start]==nums[start]:
            start+=1
        end=len(nums)-1
        while dup[end]==nums[end]:
            end-=1
        return end-start+1
