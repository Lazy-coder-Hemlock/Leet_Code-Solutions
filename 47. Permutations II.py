class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        perm=itertools.permutations(nums)
        k=[]
        for i in list(perm):
            if i not in k:
                k.append(i)
        return k
