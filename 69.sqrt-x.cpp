/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
class Solution {
public:
    int mySqrt(int x) {
        if(x < 0) return x;
        if(x == 0 || x == 1) return x;

        int start = 1, end = x, ans;    
        while (start <= end)  
        {         
            int mid = (start + end) / 2; 
  
            if (mid*mid == x) 
                return mid; 
  
            if (mid*mid < x)  
            { 
                start = mid + 1; 
                ans = mid; 
            }  
            else // If mid*mid is greater than x 
                end = mid-1;         
        } 
        return ans; 
    }
};

