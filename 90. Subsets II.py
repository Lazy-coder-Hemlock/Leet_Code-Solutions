class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res=[]
        p=int(2**len(nums))
        for i in range(p):
            l=[]
            for j in range(len(nums)):
                if i&(1<<j):
                    l.append(nums[j])
            if l not in res:
                res.append(l)
        return res
        
