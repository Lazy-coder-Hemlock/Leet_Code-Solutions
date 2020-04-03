class Solution:
    def findComplement(self, num: int) -> int:
        c=bin(num)[2:]
        l=[i for i in c]
        for i in range(len(l)):
            n=int(l[i])
            conv=1-n
            l[i]=str(conv)
        digi=int(''.join(l),2)
        return digi
        
