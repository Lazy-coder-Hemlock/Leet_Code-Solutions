class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        k=1
        for i in sentence.split():
            if i.startswith(searchWord):
                return k
            k+=1
        return -1
