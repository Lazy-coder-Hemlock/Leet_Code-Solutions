class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        m=0
        count=0
        for i in nums:
            if i==1:
                count+=1
            else:
                m=max(count,m)
                count=0
        m=max(count,m)
        return m
