#
# @lc app=leetcode id=17 lang=python3
#
# [17] Letter Combinations of a Phone Number
#
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        digits_map = {'2':"abc", '3':"def", '4':"ghi", '5':"jkl", '6':"mno", 
                        '7':"pqrs", '8':"tuv", '9':"wxyz"}
        if digits == "":
            return ""
        result = digits_map[digits[0]]
        if len(digits) == 1:
            return result
        for i in range(1, len(digits)):
            new_list = []
            for r in result:
                for c in digits_map[digits[i]]:
                    new_list.append(r+c)
            result = new_list
        return result

