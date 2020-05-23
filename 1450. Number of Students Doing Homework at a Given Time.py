class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        l=[]
        for i,j in zip(startTime,endTime):
            l.append([i,j])
        count=0
        for i,j in l:
            if i<=queryTime<=j:
                count+=1
        return count
