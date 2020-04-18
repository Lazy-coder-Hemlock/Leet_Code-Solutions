class Solution:
    def queryString(self, S: str, N: int) -> bool:
        for i in range(1,N+1):
            if S.find(bin(i)[2:])==-1:
                return False
                break
        return True
