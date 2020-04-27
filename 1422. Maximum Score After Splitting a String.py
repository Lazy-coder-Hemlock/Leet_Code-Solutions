class Solution:
    def maxScore(self, s: str) -> int:
        m=0
        i=0
        while i<len(s)-1:
            l=s[:i+1].count('0')+s[i+1:].count('1')
            m=max(l,m)
            i+=1
        return m
        
