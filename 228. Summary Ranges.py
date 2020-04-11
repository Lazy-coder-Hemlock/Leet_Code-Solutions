class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if len(nums)==0:
            return []
        stack=[]
        res=[]
        for i in nums:
            if not stack:
                stack.append(i)
            elif i==stack[-1]+1:
                stack.append(i)
            else:
                if len(stack)==1:
                    res.append(str(stack[-1]))
                    stack.pop()
                    stack.append(i)
                else:
                    res.append(str(stack[0])+"->"+str(stack[-1]))
                    stack.clear()
                    stack.append(i)
        if len(stack)==1:
            res.append(str(stack[0]))
        else:
            res.append(str(stack[0])+"->"+str(stack[-1]))
        
        return res
        
