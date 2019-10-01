/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */
class Solution {
public:
    vector<int> grayCode(int n) {
    vector<int> ans{0};
    for(int i = 1; i < (1 << n); i <<= 1)
        for(int j = ans.size()-1; j >= 0; --j)
            ans.push_back(i ^ ans[j]);
    return ans;
    }
};

