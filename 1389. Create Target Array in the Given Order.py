class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        result=[insert(index[i],nums[i]) for i in range(nums)]
        for i in range(len(nums)):
            result.insert(index[i],nums[i])
        return result
        
