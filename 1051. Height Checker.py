class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        dup=copy.copy(heights);
        dup.sort()
        count=0
        for i in range(len(heights)):
            if dup[i]!=heights[i]:
                count+=1
        return count
        
