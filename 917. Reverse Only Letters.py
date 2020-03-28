class Solution:
    def reverseOnlyLetters(self, S: str) -> str:
        store=""
        for i in S:
            if i.isalpha():
                store+=i
        store=list(store)
        result=""
        for i in S:
            if i.isalpha():
                result+=store.pop()
            else:
                result+=i
        return result
                
        
