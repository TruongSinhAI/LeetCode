class Solution:
    def balancedString(self, s: str) -> int:
        n = len(s)
        target = n // 4
        count = Counter(s)

        if all(count[ch] == target for ch in "QWER"):
            return 0

        res = n  
        left = 0

        for right in range(n):
            count[s[right]] -= 1 

            while left < n and all(count[ch] <= target for ch in "QWER"):
                res = min(res, right - left + 1)
                count[s[left]] += 1  
                left += 1

        return res
        