class Trie:

    def __init__(self):
        self.stack=[]
        """
        Initialize your data structure here.
        """
        

    def insert(self, word: str) -> None:
        self.stack.append(word)
        """
        Inserts a word into the trie.
        """
        

    def search(self, word: str) -> bool:
        if word in self.stack:
            return True
        return False;
        """
        Returns if the word is in the trie.
        """
        

    def startsWith(self, prefix: str) -> bool:
        for i in self.stack:
            s=str(i)
            if s.startswith(prefix):
                return True
        return False
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        

        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
