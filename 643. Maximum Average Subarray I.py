class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        m=0
        for i in range(k):
            m+=nums[i]
        n=m/k;
        store=n
        for i in range(k,len(nums)):
            m+=nums[i]
            m-=nums[i-k]
            store=max(store,m/k)
        return store
    
        
