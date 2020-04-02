class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        dup=sorted(set(arr))
        k=1
        d={}
        for i in dup:
            d[i]=k
            k+=1
        k=[]
        for i in arr:
            k.append(d[i])
        return k 
            
        
