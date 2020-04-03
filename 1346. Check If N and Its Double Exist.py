class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        for i in arr:
            if i==0:
                if arr.count(0)>1:
                    return True
            elif i<0:
                if -(2*abs(i)) in arr:
                    return True
            else:
                if 2*i in arr:
                    return True
        return False
        
