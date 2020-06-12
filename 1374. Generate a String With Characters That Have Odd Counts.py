class Solution:
    def generateTheString(self, n: int) -> str:
        res=""
        if n&1:
            res+='a'*n
        else:
            res+='a'*(n-1)+'b'
        return res
        
