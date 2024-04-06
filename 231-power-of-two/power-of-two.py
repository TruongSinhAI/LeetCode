class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        x = 0
        if n==1:
            return True
        if n%2!=0:
            return False
        while 2**x<n:
            x+= 1
        if 2**x==n:
            return True
        else:
            return False