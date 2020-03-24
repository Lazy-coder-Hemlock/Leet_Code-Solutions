class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        first=['q','w','e','r','t','y','u','i','o','p']
        second=['a','s','d','f','g','h','j','k','l']
        third=['z','x','c','v','b','n','m']
        words_list=[]
        for word in words:
            nakli=word
            nakli=nakli.lower()
            f=m=l=0
            for letter in nakli:
                if letter in first:
                    f+=1
                elif letter in second:
                    m+=1
                elif letter in third:
                    l+=1
            if f==len(word) or m==len(word) or l==len(word):
                words_list.append(word)
        return words_list
                
