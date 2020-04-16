class Solution:
    def numSmallerByFrequency(self, queries: List[str], words: List[str]) -> List[int]:
        l=[]
        c=[]
        for i in range(len(words)):
            l.append(words[i].count(min(words[i])))
        for i in range(len(queries)):
            m=queries[i].count(min(queries[i]))
            res=0
            for j in range(len(l)):
                if l[j]>m:
                    res+=1
            c.append(res)
        return c
