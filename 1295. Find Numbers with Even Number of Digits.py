class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count=0
        for i in nums:
            if len(str(i))&1==0:
                count+=1
        return count
        
