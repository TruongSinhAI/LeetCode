class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        x  = prices[0]
        for i in prices[1:]:
            x = min(x, i)
            ans = max(ans, i-x)
        return ans 
         
