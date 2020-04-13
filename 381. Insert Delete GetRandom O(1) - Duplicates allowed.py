class RandomizedCollection:

    def __init__(self):
        self.stack=[]
        """
        Initialize your data structure here.
        """
        

    def insert(self, val: int) -> bool:
        self.val=val
        if self.val not in self.stack:
            self.stack.append(self.val)
            return True
        self.stack.append(self.val)
        return False
        """
        Inserts a value to the collection. Returns true if the collection did not already contain the specified element.
        """
        

    def remove(self, val: int) -> bool:
        self.val=val
        if self.val in self.stack:
            self.stack.remove(self.val)
            return True
        return False
        """
        Removes a value from the collection. Returns true if the collection contained the specified element.
        """
        

    def getRandom(self) -> int:
        import random
        self.s=random.randint(0,len(self.stack)-1)
        return list(self.stack)[self.s]
        """
        Get a random element from the collection.
        """
        


# Your RandomizedCollection object will be instantiated and called as such:
# obj = RandomizedCollection()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
