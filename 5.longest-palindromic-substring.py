#
# @lc app=leetcode id=5 lang=python3
#
# [5] Longest Palindromic Substring
#
class Solution:
    def longestPalindrome(self, s: str) -> str:
        substring = ""
        if len(s) == 1:
            return s
        if s == "":
            return ""
        for start in range(len(s)):
            for i, m in enumerate(s[start+1:], start+1):
                if(m == s[start]):
                    temp = s[start:i+1]
                    if temp == temp[::-1]:
                        if len(substring) < len(temp):
                            substring = temp
        if substring == "":
            return s[0]
        return substring
        

