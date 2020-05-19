class Solution:
    def arrangeWords(self, s: str) -> str:
        s=s.lower()
        s=s.split()
        s.sort(key=len)
        s1=s[0]
        s.pop(0)
        s1=s1.capitalize()
        s.insert(0,s1)
        return ' '.join(s)
