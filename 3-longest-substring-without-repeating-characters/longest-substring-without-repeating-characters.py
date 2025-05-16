class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        ans = 0
        left = 0
        right = 1
        count = 1
        while right<len(s):
            if s[right] in s[left:right]:
                ans = max(ans, count)
                left = s[left:right].find(s[right]) +1+left
                print(left, right)
                count = right-left +1
            else:
                count += 1
            right += 1
        ans = max(ans, count)
        return ans
        # for i in range(len(s)):
        #     if s[i] in s[:i]:
        #         ans = 
