from itertools import permutations
class Solution:
    def reorderedPowerOf2(self, N: int) -> bool:
        l=list(permutations(str(N)))
        def p(x):
            return (x and(not(x&(x-1))))
        for i in l:
            n=''.join(i)
            if n.startswith('0'):
                pass
            else:
                n=int(n)
                if p(n):
                    return True
        return False
            
