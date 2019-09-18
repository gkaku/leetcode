/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()){
            vector<int> a;
            return a;
        }
        int num_row = matrix.size();
        int num_col = matrix[0].size();
        int len = num_col * num_row;
        vector<int> out;
        vector<vector<int>> matrix_ = matrix;
        bool right = true;
        bool down = false;
        bool left = false;
        bool up = false;
        int i = 0;
        while(i < len){
            if(right){
                for(int j = 0; j < matrix_[0].size(); j++)
                    out.push_back(matrix_[0][j]);
                i = i + matrix_[0].size();
                matrix_.erase(matrix_.begin());
                right = false;
                down = true;
            }
            else if(down){
                int k = matrix_[0].size() - 1;
                for(int j = 0; j < matrix_.size(); j++){
                    out.push_back(matrix_[j][k]);
                }
                i = i + matrix_.size(); 
                for(int j = 0; j < matrix_.size(); j++){
                    matrix_[j].pop_back();
                }
                down = false;
                left = true;
            }
            else if(left){
                for(int j = matrix_[0].size() - 1; j >= 0; j--){
                    out.push_back(matrix_[matrix_.size() - 1][j]);
                }
                i = i + matrix_[0].size();
                matrix_.pop_back();
                left = false;
                up = true;
            }
            else if(up){
                for(int j = matrix_.size() - 1; j >= 0; j--){
                    out.push_back(matrix_[j][0]);
                }
                i = i + matrix_.size();
                for(int j = 0; j < matrix_.size(); j++){
                    matrix_[j].erase(matrix_[j].begin());
                }
                up = false;
                right = true;
            }
            
        }
    return out;
    }
};

