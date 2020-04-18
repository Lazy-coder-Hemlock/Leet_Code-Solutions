class Solution:
    def clumsy(self, N: int) -> int:
        l=['*','//','+','-']
        k=0
        res=""
        for i in range(N,0,-1):
            res+=str(i)
            if i==1:
                break
            if k==len(l)-1:
                res+=l[k]
                k=0
            else:
                res+=l[k]
                k+=1
        return eval(res)
            
            
