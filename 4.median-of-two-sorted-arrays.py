#
# @lc app=leetcode id=4 lang=python3
#
# [4] Median of Two Sorted Arrays
#
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1
        
        x = len(nums1)
        y = len(nums2)
        start = 0
        end = x
        while start <= end:
            partition_x = (start + end) // 2
            partition_y = (len(nums1) + len(nums2) + 1) // 2 - partition_x
            max_left_x = nums1[partition_x-1] if partition_x > 0 else float('-inf')
            min_right_x = nums1[partition_x] if partition_x < x else float('inf')
            max_left_y = nums2[partition_y-1] if partition_y > 0 else float('-inf')
            min_right_y = nums2[partition_y] if partition_y < y else float('inf')
            if max_left_x <= min_right_y and min_right_x >= max_left_y:
                if (x+y)%2 == 0:
                    median = (max(max_left_x, max_left_y) + min(min_right_x, min_right_y)) / 2
                    return median
                else:
                    median = max(max_left_x, max_left_y)
                    return median
            elif max_left_x > min_right_y:
                end = partition_x - 1
            else:
                start = partition_x + 1
