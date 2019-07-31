/*
 * @lc app=leetcode id=11 lang=c
 *
 * [11] Container With Most Water
 */


int maxArea(int* height, int heightSize){
    int l = 0;
    int r = heightSize - 1;
    int max_area = 0;
    int area = 0;
    while(l != r){
        if(*(height + l) < *(height + r)){
            area = *(height + l) * (r - l);
            l++;
        }
        else {
            area = *(height + r) * (r - l);
            r--;
        }
        max_area = (area > max_area) ? area : max_area;
    }
    return max_area;
}



