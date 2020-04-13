class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        d={}
        res=[]
        for i in nums:
            d[i]=d.get(i,0)+1
        for k,v in d.items():
            if v==2:
                res.append(k)
        n=len(nums)
        s=n*(n+1)//2
        miss=s-sum(set(nums))
        res.append(miss)
        return res
