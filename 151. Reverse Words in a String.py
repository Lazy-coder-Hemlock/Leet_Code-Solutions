class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        k=[]
        for i in range(len(l)):
            k.insert(i,l[len(l)-i-1])
        s1=' '.join(k)
        return s1
            
        
