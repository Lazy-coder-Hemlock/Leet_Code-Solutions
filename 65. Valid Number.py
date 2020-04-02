class Solution:
    def isNumber(self, s: str) -> bool:
        try:
            x1=float(s)
        except ValueError as e:
            return False
        return True
        
