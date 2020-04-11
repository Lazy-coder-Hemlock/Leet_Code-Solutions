import random as r
class RandomizedSet:

    def __init__(self):
        self.s=set()
        """
        Initialize your data structure here.
        """
        

    def insert(self, val: int) -> bool:
        if val in self.s:
            return False
        self.s.add(val)
        return True
        """
        Inserts a value to the set. Returns true if the set did not already contain the specified element.
        """
        

    def remove(self, val: int) -> bool:
        if val in self.s:
            self.s.remove(val)
            return True
        return False
        """
        Removes a value from the set. Returns true if the set contained the specified element.
        """
        

    def getRandom(self) -> int:
        self.i=r.randint(0,len(self.s)-1)
        return list(self.s)[self.i]
        """
        Get a random element from the set.
        """
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
