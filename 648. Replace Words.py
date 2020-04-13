class Solution:
    def replaceWords(self, dict: List[str], sentence: str) -> str:
        l=sentence.split()
        for i in range(len(l)):
            for word in dict:
                if l[i].startswith(word):
                    l[i]=word
        return ' '.join(l)
