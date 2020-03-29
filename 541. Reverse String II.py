class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        while len(s)<k:
            return s[::-1]
        i=0
        s=list(s)
        while i<len(s):
            s[i:i+k]=s[i:i+k][::-1]
            i+=2*k
        
        return ''.join(s)
