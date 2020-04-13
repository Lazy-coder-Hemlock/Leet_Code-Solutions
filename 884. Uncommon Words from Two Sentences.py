class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        d={}
        for i in A.split():
            d[i]=d.get(i,0)+1
        for i in B.split():
            d[i]=d.get(i,0)+1
        return [k for k,v in d.items() if v==1]
