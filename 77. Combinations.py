class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        l=list(itertools.combinations([i for i in range(1,n+1)],k))
        return l
        
