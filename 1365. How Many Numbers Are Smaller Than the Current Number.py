class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        nakli=copy.copy(nums)
        nakli.sort()
        l=[nakli.index(i) for i in nums]       
        return l
            
        
