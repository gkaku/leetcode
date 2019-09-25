/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */
class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        while(carry or i >= 0 or j >= 0)
        {
            int num1 = 0, num2 = 0;
            if(i >= 0)
                num1 = a[i--] - '0';
            if(j >= 0)
                num2 = b[j--] - '0';
            int sum = num1 + num2 + carry;
            res.push_back(sum % 2 + '0');
            carry = sum / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    
    }
};

