import math
class Solution:
    def mySqrt(self, x: int) -> int:
        y=(x**(0.5))
        return math.trunc(y)
