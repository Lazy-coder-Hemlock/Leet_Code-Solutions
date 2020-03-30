class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        l=set(list([i for i in range(1,len(nums)+1)]))
        for i in nums:
            if i in l:
                l.discard(i)
        return list(l)
