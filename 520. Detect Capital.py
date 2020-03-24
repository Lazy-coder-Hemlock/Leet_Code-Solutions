class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word.islower():
            return True
        elif word.isupper():
            return True
        else:
            if 65<=ord(word[0]) and ord(word[0])<=90:
                for i in range(1,len(word)):
                    if ord(word[i])<97:
                        return False
                return True 
