class Solution:
    def bitwiseComplement(self, N: int) -> int:
        a=bin(N)[2:]
        s=""
        for i in str(a):
            if i=='1':
                s+='0'
            else:
                s+='1'
        return int(s,2)
