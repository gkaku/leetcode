#
# @lc app=leetcode id=12 lang=python3
#
# [12] Integer to Roman
#
class Solution:
    def intToRoman(self, num: int) -> str:
        roman_dict = {1:"I", 4:"IV", 5:"V", 9:"IX", 10:"X", 40:"XL", 50:"L", 
                      90:"XC", 100:"C",400:"CD", 500:"D", 900:"CM", 1000:"M"}
        keys = list(roman_dict.keys())
        keys.sort(reverse=True)
        retval = ""
        while num > 0:
            for k in keys:
                if num >= k:
                    num -= k
                    retval += roman_dict[k]
                    break
        return retval 

