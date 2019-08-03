#
# @lc app=leetcode id=13 lang=python3
#
# [13] Roman to Integer
#
class Solution:
    def romanToInt(self, s: str) -> int:
        dic = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        num = 0
        prve = 0
        while(s) :
            curr = dic.get(s[-1])
            if curr < prve :
                num -= curr
            else:
                num += curr
            s = s[:-1]
            prve = curr
        return num

