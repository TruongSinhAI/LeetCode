class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        tmp = 0 
        for i in s:
            if i=='(':
                tmp += 1
                ans = max(ans, tmp)
            elif i ==')':
                tmp -=1
        return ans