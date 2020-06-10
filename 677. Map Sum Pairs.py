class MapSum:

    def __init__(self):
        self.d=Counter()
        """
        Initialize your data structure here.
        """
        

    def insert(self, key: str, val: int) -> None:
        self.d[key]=val
        

    def sum(self, prefix: str) -> int:
        self.s=0
        for k,v in self.d.items():
            if k.startswith(prefix):
                self.s+=v
        return self.s


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)
