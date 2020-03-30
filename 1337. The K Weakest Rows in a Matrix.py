class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        d={}
        count=0
        for i in range(len(mat)):
            for j in range(len(mat[i])):
                if mat[i][j]==1:
                    count+=1
            d[i]=count
            count=0
        l=sorted(d.items(),key=lambda x:x[1])
        k1=[i for i,j in l]
        return k1[:k]
                    
