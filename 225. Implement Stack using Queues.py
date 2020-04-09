class MyStack:

    def __init__(self):
        self.stack=[]
        """
        Initialize your data structure here.
        """
        

    def push(self, x: int) -> None:
        self.stack.append(x)
        """
        Push element x onto stack.
        """
        

    def pop(self) -> int:
        if len(self.stack)==0:
            return -1
        self.x=self.stack[-1]
        self.stack.pop()
        return self.x
        """
        Removes the element on top of the stack and returns that element.
        """
        

    def top(self) -> int:
        if len(self.stack)==0:
            return -1
        return self.stack[-1]
        
        """
        Get the top element.
        """
        

    def empty(self) -> bool:
        return len(self.stack)==0
        """
        Returns whether the stack is empty.
        """
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
