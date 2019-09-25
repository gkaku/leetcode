/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.empty())
            return ;
        int start = 0;
        int end = nums.size()-1;
        int k = 0;
        while(k<=end)
        {
            if(nums[k] == 0) 
            {
                swap(&nums[k], &nums[start]);
                start++;
            }
            if(nums[k] == 2)
            {
                swap(&nums[k],&nums[end]);
                end--;
                if(nums[k] != 1) continue;
            }
            k++;
        }
    }
    void swap(int* a, int* b)
    {
        int temp = 0;
        temp = *a;
        *a = *b;
        *b = temp;
    }
};

