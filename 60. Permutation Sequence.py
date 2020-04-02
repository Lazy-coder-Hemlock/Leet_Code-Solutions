class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        values=[str(i) for i in range(1,n+1)]
        store=list(itertools.permutations(values))
        k1=[''.join(i) for i in store]
        return k1[k-1]
        
