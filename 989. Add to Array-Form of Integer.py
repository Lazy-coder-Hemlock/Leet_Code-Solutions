class Solution:
    def addToArrayForm(self, A: List[int], K: int) -> List[int]:
        s=""
        for i in range(len(A)):
            s+=str(A[i])
        l=str(int(s)+K)
        res=[]
        for i in l:
            res.append(i)
        return res
        
