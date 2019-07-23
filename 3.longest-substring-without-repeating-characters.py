#
# @lc app=leetcode id=3 lang=python
#
# [3] Longest Substring Without Repeating Characters
#
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        substring = ""
        length = 0
        if s == None:
            return 0
        if len(s) == 1:
            return 1
        for i in s:
            if i in substring:
                substring = substring[substring.index(i)+1 :]
            substring += i
            length = max(length, len(substring))
        return length


