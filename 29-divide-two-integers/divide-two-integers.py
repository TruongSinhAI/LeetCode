class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        ans = dividend//divisor
        if ans<0 and dividend%divisor!=0:
            ans += 1
        if ans<0:
            ans = max(ans, -2**31)
        else:
            ans = min(ans, 2**31-1)
        return ans