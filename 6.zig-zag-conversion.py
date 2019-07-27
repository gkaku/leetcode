#
# @lc app=leetcode id=6 lang=python3
#
# [6] ZigZag Conversion
#
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if s == None:
            return s
        if numRows == 0:
            return s
        if numRows == 1:
            return s
        
        rstr = ""
        for i in range(numRows):
            for j in range(i, len(s), 2*(numRows-1)):
                rstr += s[j]
                if numRows-1 > i > 0:
                    a = j + (numRows-i-1)*2
                    if a < len(s):
                        rstr += s[a]
        return rstr


