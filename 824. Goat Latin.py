class Solution:
    def toGoatLatin(self, S: str) -> str:
        l=[]
        res=[]
        k=1
        for i in S.split():
            if i.startswith('a') or i.startswith('e') or i.startswith('i') or i.startswith('o') or i.startswith('u') or i.startswith('A') or i.startswith('E') or i.startswith('I') or i.startswith('O') or i.startswith('U'):
                res.append((i+'ma')+(k*'a'))
                k+=1
            else:
                if len(i)==1:
                    res.append((i+'ma')+(k*'a'))
                    k+=1
                else:
                    res.append((i[1:]+i[0]+'ma')+(k*'a'))
                    k+=1
        return ' '.join(res)
