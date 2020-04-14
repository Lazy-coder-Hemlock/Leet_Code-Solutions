from collections import Counter
class Solution:
    def minSteps(self, s: str, t: str) -> int:
        if len(s)!=len(t):
            return 0
        if ''.join(sorted(s))==''.join(sorted(t)):
            return 0;
        else:
            res=Counter(s)-Counter(t)
            c=0
            for k,v in res.most_common():
                c+=v
            return c 
        
