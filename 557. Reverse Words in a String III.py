class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        s=' '.join([i[::-1] for i in l])
        return s
        
