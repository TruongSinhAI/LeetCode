class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        ans = ''.join([i for i in s if i.isalpha()])[::-1]
        for i in range(len(s)):
            if not s[i].isalpha():
                ans = ans[:i] + s[i] + ans[i:]
        return ans