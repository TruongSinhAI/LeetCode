class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        x = sorted(list(set(nums)))
        ans = 0
        c = 1
        for i in range(1, len(x)):
            if x[i] - 1 == x[i-1]:
                c += 1
            else:
                ans = max(ans, c)
                c = 1

        ans = max(ans, c)
        if len(x) ==0:
            return 0
        return ans
