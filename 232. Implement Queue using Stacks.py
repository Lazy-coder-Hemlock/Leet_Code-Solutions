class MyQueue:

    def __init__(self):
        self.queue=[]
        """
        Initialize your data structure here.
        """
        

    def push(self, x: int) -> None:
        self.queue.append(x)
        """
        Push element x to the back of queue.
        """
        

    def pop(self) -> int:
        if len(self.queue)==0:
            return -1
        self.x=self.queue[0]
        self.queue.pop(0)
        return self.x
        """
        Removes the element from in front of queue and returns that element.
        """
        

    def peek(self) -> int:
        if len(self.queue)==0:
            return -1
        return self.queue[0]
        """
        Get the front element.
        """
        

    def empty(self) -> bool:
        return len(self.queue)==0
        """
        Returns whether the queue is empty.
        """
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
