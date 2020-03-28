class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for i in range(len(A)):
            A[i]=A[i][::-1]
        for i in A:
            for j in range(len(i)):
                if i[j]==1:
                    i[j]=0
                else:
                    i[j]=1
        return A
        
