#
# @lc app=leetcode id=16 lang=python3
#
# [16] 3Sum Closest
#
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        min_sum = nums[0] + nums[1] + nums[2]
        for i in range(len(nums) - 2):
            l, r = i + 1, len(nums) - 1
            while l < r:
                currsum = nums[i] + nums[l] + nums[r]
                min_sum = currsum if abs(currsum - target) < abs(min_sum - target) else min_sum
                if currsum < target:
                    l += 1
                elif currsum > target:
                    r -= 1
                else:
                    return target
        return min_sum
