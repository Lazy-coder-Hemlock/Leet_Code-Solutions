class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        l=list(itertools.combinations([i for i in range(1,10)],k))
        return [i for i in l if sum(i)==n]
