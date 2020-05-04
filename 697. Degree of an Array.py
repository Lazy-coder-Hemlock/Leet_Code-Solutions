class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        d={}
        for i in nums:
            d[i]=d.get(i,0)+1
        val=[i for i in d.values()]
        store=max(val)
        keys=[k for k,v in d.items() if v==store]
        res=float('inf')
        for i in keys:
            first=nums.index(i)
            second=len(nums)-nums[::-1].index(i)-1
            res=min(res,second-first+1)
        return res
            
