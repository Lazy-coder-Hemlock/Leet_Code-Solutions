class MinStack:

    def __init__(self):
        self.l=[]
        """
        initialize your data structure here.
        """
        

    def push(self, x: int) -> None:
        self.l.append(x)
        

    def pop(self) -> None:
        if len(self.l)==0:
            return -1
        self.l.pop()
        

    def top(self) -> int:
        if len(self.l)==0:
            return -1
        return self.l[-1]
        
        

    def getMin(self) -> int:
        if len(self.l)==0:
            return -1
        return min(self.l)
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
