class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        arr=copy.copy(nums)
        arr.sort()
        l=[]
        k=1
        v=len(nums)
        for i in range(len(arr)):
            if sum(l)>sum(arr[:v]):
                break
            else:
                l.append(arr[-k])
                k+=1
                v-=1
        return l
            
                
