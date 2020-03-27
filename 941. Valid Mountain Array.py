class Solution:
    def validMountainArray(self, A: List[int]) -> bool:
        if len(A)<3:
            return False
        b=True
        m=A.index(max(A))
        if m==0 or m==len(A)-1:
            return False
        for i in range(m):
            if A[i]>=A[i+1]:
                b=False
        if not b:
            return False
        for i in range(m,len(A)-1):
            if A[i+1]>=A[i]:
                b=False
        if not b:
            return False
        else:
            return True
            
            
        
