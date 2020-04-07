class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        if len(arr)==1:
            return arr[0]
        d={}
        for i in arr:
            if i in d:
                d[i]+=1
                if d[i]>len(arr)/4:
                    return i
            else:
                d[i]=1
        
