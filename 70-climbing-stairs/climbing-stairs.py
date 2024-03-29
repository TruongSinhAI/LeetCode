class Solution:
    def climbStairs(self, n: int) -> int:
        x=  1
        y = 2
        if n==1: 
            return x
        elif n==2:
            return y
        while n>2:
            x = x + y
            x = x+ y
            y = x - y
            x = x - y
            n -= 1  
        return y
