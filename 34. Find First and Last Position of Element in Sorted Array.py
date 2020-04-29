class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l=[]
        try:
            x=nums.index(target)
            l.append(x)
        except ValueError as e:
            l.append(-1)
        try:
            x=len(nums)-nums[::-1].index(target)-1
            l.append(x)
        except ValueError as e:
            l.append(-1)
        return l
            
        
