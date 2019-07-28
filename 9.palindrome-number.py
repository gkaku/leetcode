#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#
class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = []
        y = 0
        temp = x
        if x == 0:
            return True
        elif x > 0:
            while temp > 0: 
                s.append(temp % 10)
                temp = temp // 10
            for i, m in enumerate(s):
                y += m * 10**(len(s)-1-i)
            if x == y:
                return True
            else:
                return False
        else:
            return False

