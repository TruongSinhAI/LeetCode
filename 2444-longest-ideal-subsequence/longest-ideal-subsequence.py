class Solution:
    def longestIdealString(self, s: str, k: int) -> int:
        # dp = [0]*26
        # for ch in s:
        #     x = ord(ch) - ord('a')
        #     for i in range(max(0,x-k), min(25,x+k) +1):
        #         dp[x] = max(dp[i] , dp[x])
        #     dp[x] +=1
        dp = [0]*26
        for ch in s:
            dp[ord(ch) - ord('a')] = max(dp[max(0,ord(ch) - ord('a') -k): min(25,ord(ch) - ord('a') +k)+1]) + 1
        return max(dp)