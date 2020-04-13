class MyHashSet:

    def __init__(self):
        self.s=set()
        """
        Initialize your data structure here.
        """
        

    def add(self, key: int) -> None:
        self.key=key
        self.s.add(self.key)

    def remove(self, key: int) -> None:
        self.key=key
        if self.key in self.s:
            self.s.remove(self.key)

    def contains(self, key: int) -> bool:
        self.key=key
        if self.key in self.s:
            return True
        return False
        """
        Returns true if this set contains the specified element
        """
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)
