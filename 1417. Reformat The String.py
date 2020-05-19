class Solution:
    def reformat(self, s: str) -> str:
        if len(s)!=1 and s.isnumeric():
            return ""
        if len(s)==1 and s.isnumeric():
            return s
        if len(s)==1 and s.isalpha():
            return s
        if s.isalpha():
            return ""
        letters=[]
        numbers=[]
        for i in range(len(s)):
            if s[i].isalpha():
                letters.append(s[i])
            else:
                numbers.append(s[i])
        res=""
        if len(numbers)>len(letters):
            for k,v in zip(numbers,letters):
                res+=k+v
            res+=numbers[-1]
            return res
        elif len(letters)>len(numbers):
            for k,v in zip(letters,numbers):
                res+=k+v
            res+=letters[-1]
            return res
        else:
            for k,v in zip(letters,numbers):
                res+=k+v
            return res
                
