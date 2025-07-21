class Solution:
    def makeFancyString(self, s: str) -> str:
        count = 1
        idx = 1
        res = s[0]
        while idx < len(s):
            if s[idx] == s[idx-1] and count <2:
                res += s[idx]
                count +=1
            if s[idx] != s[idx-1]:
                count = 1
                res += s[idx]
            idx += 1

        return res