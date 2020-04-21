class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res=set()
        i=j=0
        m=0
        while i<len(s) and j<len(s):
            if s[i] not in res:
                res.add(s[i])
                i+=1
                m=max(m,i-j)
            else:
                res.remove(s[j])
                j+=1
        return m
