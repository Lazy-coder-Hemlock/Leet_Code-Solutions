class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend==-2**31 and divisor==-2**31:
            return  math.trunc(dividend/divisor)
        if dividend==-2**31  and divisor<0:
            return math.trunc(-(2**31-1)/divisor)
        return math.trunc(dividend/divisor)
        
