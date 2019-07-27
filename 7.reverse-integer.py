#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#
class Solution:
    def reverse(self, x: int) -> int:
        if x not in range(-2**31, 2**31):
            return 0
        xstr = str(x)
        a = 0
        if x == 0:
            return 0
        if x > 0:
            xstr = xstr[::-1]
            if xstr[0] == '0':
                a = int(xstr[1::])
                return a if a in range(-2**31, 2**31) else 0
            a = int(xstr)
            return a if a in range(-2**31, 2**31) else 0
        else:
            if xstr[-1] == "0":
                xstr = xstr[::-1]
                a = 0 - int(xstr[1:len(xstr)-1])
                return a if a in range(-2**31, 2**31) else 0
            xstr = xstr[::-1]
            a = 0 - int(xstr[:len(xstr)-1])
            return a if a in range(-2**31, 2**31) else 0
