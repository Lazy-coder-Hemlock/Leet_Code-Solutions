class CustomStack:

    def __init__(self, maxSize: int):
        self.maxSize=maxSize
        self.stack=[]
        

    def push(self, x: int) -> None:
        if len(self.stack)<self.maxSize:
            self.stack.append(x)

    def pop(self) -> int:
        if len(self.stack)==0:
            return -1
        self.value=self.stack[-1]
        self.stack.pop(-1)
        return self.value
        

    def increment(self, k: int, val: int) -> None:
        self.k=k
        self.val=val
        for i in range(len(self.stack)):
            if i<self.k:
                self.stack[i]+=self.val
        


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)
