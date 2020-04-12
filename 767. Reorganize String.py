from collections import Counter
class Solution:
    def reorganizeString(self, S: str) -> str:
        index=0
        res=['']*len(S)
        for k,v in Counter(S).most_common():
            for i in range(v):
                res[index]=k
                index+=2
                if index>=len(S):
                    index=1
        for i in range(len(res)-1):
            if res[i]==res[i+1]:
                return ""
        return ''.join(res)
                
