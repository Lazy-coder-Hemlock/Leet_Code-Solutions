class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if s==" " or s=="" or s=="        ":
            return 0
        l=s.split()
        return len(l[len(l)-1])
        
