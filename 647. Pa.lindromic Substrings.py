class Solution:
    def countSubstrings(self, s: str) -> int:
        result=[]
        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                result.append(s[i:j])
        count=0
        for i in result:
            if i==i[::-1]:
                count+=1
        return count
