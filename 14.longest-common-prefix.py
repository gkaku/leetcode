#
# @lc app=leetcode id=14 lang=python3
#
# [14] Longest Common Prefix
#
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        for i, s in enumerate(zip(*strs)):
            if len(set(s)) > 1:
                return strs[0][:i]
        return min(strs)

