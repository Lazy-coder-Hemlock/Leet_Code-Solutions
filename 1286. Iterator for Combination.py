class CombinationIterator:

    def __init__(self, characters: str, combinationLength: int):
        self.queue=list(itertools.combinations(characters,combinationLength))
        self.k=0
        self.queue.sort()
        

    def next(self) -> str:
        self.s=self.queue[self.k]
        self.k+=1
        return ''.join(self.s)
    
    def hasNext(self) -> bool:
        return 0 if self.k==len(self.queue) else 1


# Your CombinationIterator object will be instantiated and called as such:
# obj = CombinationIterator(characters, combinationLength)
# param_1 = obj.next()
# param_2 = obj.hasNext()
