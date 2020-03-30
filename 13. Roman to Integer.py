class Solution:
    def romanToInt(self, s: str) -> int:
        values={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        stack=[]
        stack.append(values[s[0]])
        for i in range(1,len(s)):
            if values[s[i]]<=values[s[i-1]]:
                stack.append(values[s[i]])
            else:
                prev=stack.pop()
                curr=values[s[i]]
                stack.append(curr-prev)
        return sum(stack)
                
        
