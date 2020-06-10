class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        s=''.join([str(i) for i in b])
        s=int(s)
        return pow(a,s,1337)
            
