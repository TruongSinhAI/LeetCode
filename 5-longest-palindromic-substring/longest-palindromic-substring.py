class Solution:
    def longestPalindrome(self, s: str) -> str:
        def check(s:str):
            return s == s[::-1]
        if len(s) == 1:
            return s
        ans = 0
        rs = ''
        for i in range(len(s)):
            for j in range(i, len(s)+1):
                if check(s[i:j]) and len(s[i:j])>ans:
                    ans = len(s[i:j])
                    rs = s[i:j]
        return rs