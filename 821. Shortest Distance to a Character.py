class Solution:
    def shortestToChar(self, S: str, C: str) -> List[int]:
        store=[]
        for i in range(len(S)):
            if S[i]==C:
                store.append(i)
        result=[]
        for i in range(len(S)):
            r=float('inf')
            if S[i]==C:
                result.append(0)
            else:
                for j in range(len(store)):
                    r=min(r,abs(store[j]-i))
                result.append(r)
        return result
