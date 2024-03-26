class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        x = [0] * (max(nums)+1)
        for i in nums:
            x[i] += 1
        ans = []
        for i in nums:
            if x[i]>1:
                ans.append(i)
                x[i] = 0
        return ans