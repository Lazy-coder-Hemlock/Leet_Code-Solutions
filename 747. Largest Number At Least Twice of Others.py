class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        m=max(nums)
        b=False
        store=nums.index(m)
        nums.remove(m)
        for i in range(len(nums)):
            if 2*nums[i]>m:
                b=True
        if b:
            return -1
        return store
            
        
