/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res = {{}};
        int s = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if(i == 0 || nums[i] != nums[i-1]) s = 0;
            
            for (int e = res.size(); s < e; s++){
                res.push_back(res[s]);
                res.back().push_back(nums[i]);
            }
        }
        return res;
    }
};

