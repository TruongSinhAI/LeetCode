class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for idx in range(len(nums)):
            if target - nums[idx] in nums:
                for idx2 in range(idx + 1, len(nums)):
                    if nums[idx2] == target - nums[idx]:
                        return [idx, idx2]
