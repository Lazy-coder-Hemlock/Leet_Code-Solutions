class Solution:
    def binaryGap(self, N: int) -> int:
        l=[]
        n=bin(N)[2:]
        for i in range(len(n)):
            if n[i]=='1':
                l.append(i+1)
        if len(l)<2:
            return 0
        r=float('-inf')
        for i in range(1,len(l)):
            r=max(r,l[i]-l[i-1])
        return r
        
