#
# @lc app=leetcode id=8 lang=python3
#
# [8] String to Integer (atoi)
#
class Solution:
    def myAtoi(self, s: str) -> int:
        int_max = 2**31 - 1
        int_min = -2**31
        istr=''
        retval = 0
        if s == "":
            return 0
        first = s.strip().split(" ")[0]
        if first == None:
            return 0
        for i in first:
            if i != " ":
                istr += i
        if len(istr) == 0:
            return 0
        if istr[0] == '-':
            temp = ''
            for i in istr[1:]:
                if i.isdigit():
                    temp += i
                else:
                    break
            if temp.isdigit():
                retval = -1 * int(temp)
            else:
                retval = 0

        elif istr[0] == '+':
            temp = ''
            for i in istr[1:]:
                if i.isdigit():
                    temp += i
                else:
                    break
            if temp.isdigit():
                retval = int(temp)
            else:
                retval = 0
        elif istr[0].isdigit:
            temp = ''
            for i in istr:
                if i.isdigit():
                    temp += i
                else:
                    break
            if temp.isdigit():
                retval = int(temp)
        else:
            retval = 0
        if retval < int_min:
            return int_min
        elif retval > int_max:
            return int_max
        else:
            return retval

