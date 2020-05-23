class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        l=[]
        m=max(target)
        for i in range(1,n+1):
            if i<=m:
                if i not in target:
                    l.append("Push")
                    l.append("Pop")
                else:
                    l.append("Push")
        return l
        
