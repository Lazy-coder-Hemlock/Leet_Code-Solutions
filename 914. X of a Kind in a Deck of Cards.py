class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        if len(deck)<=1:
            return 0
        l=Counter(deck)
        #l=list(collections.Counter(deck))
        l1=list(l.values())
        g=l1[0]
        for i in range(len(l1)):
            g=gcd(l1[i],g)
        if g<2:
            return 0
        return 1
        
