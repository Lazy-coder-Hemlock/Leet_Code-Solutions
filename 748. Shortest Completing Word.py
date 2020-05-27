class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        string=""
        for i in licensePlate:
            if i.isalpha():
                string+=i
        string=string.lower()
        store=[]
        for word in words:
            count=0
            maintain=Counter(word)
            for i in string:
                if maintain[i]>=string.count(i):
                    count+=1
            if count==len(string):
                store.append(word)
        return min(store,key=len)
