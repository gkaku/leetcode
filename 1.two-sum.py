#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dir = {}
        for i, m in enumerate(nums):
            other = target - nums[i]
            if other in dir:
                return dir[other], i 
            dir[m] = i
        return []
