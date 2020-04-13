class MyHashMap:

    def __init__(self):
        self.d={}
        """
        Initialize your data structure here.
        """
        

    def put(self, key: int, value: int) -> None:
        self.key=key
        self.value=value
        self.d[self.key]=self.value
        """
        value will always be non-negative.
        """
        

    def get(self, key: int) -> int:
        self.key=key
        if self.key in self.d:
            return self.d[self.key]
        return -1
        """
        Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key
        """
        

    def remove(self, key: int) -> None:
        self.key=key
        if self.key in self.d:
            self.d.pop(self.key,None)
        return -1
        """
        Removes the mapping of the specified value key if this map contains a mapping for the key
        """
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
