/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0)
            return 0;
        if(n == 1 || n == 2)
            return n;
        int a = 1;
        int b = 2;
        int c = 0;
        for (int i = 3; i <= n; i++){
            c = b;
            b = a + b;
            a = c;
        }
        return b;
    }
};

