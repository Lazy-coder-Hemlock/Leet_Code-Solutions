class Solution:
    def letterCasePermutation(self, S: str) -> List[str]:
        l=[]
        for i in S:
            if i.isalpha():
                l.append([i.upper(),i.lower()])
            else:
                l.append(i)
        k=[]
        for i in itertools.product(*l):
            k.append(''.join(i))
        return k
        
