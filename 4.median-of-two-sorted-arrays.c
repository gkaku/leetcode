/*
 * @lc app=leetcode id=4 lang=c
 *
 * [4] Median of Two Sorted Arrays
 */
#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if(nums1Size > nums2Size){
        int* nums;
        int numsSize;
        nums = nums1;
        nums1 = nums2;
        nums2 = nums;
        numsSize = nums1Size;
        nums1Size = nums2Size;
        nums2Size = numsSize;
    }
    int start = 0;
    int end = nums1Size;
    int max_left = 0;
    int min_right = 0;
    double median = 0.0;
    while(start <= end){
        int x = (start + end) / 2;
        int y = (nums1Size + nums2Size + 1) / 2 - x;
        if(x > 0 && nums1[x - 1] > nums2[y]){
            end = x - 1;
        }
        else if(x < nums1Size && nums1[x] < nums2[y - 1]){
            start = x + 1;
        }
        else{
            if(x == 0){
                max_left = nums2[y - 1];
            }
            else if(y == 0){
                max_left = nums1[x - 1];
            }
            else {
                max_left = nums1[x - 1] > nums2[y - 1] ? nums1[x - 1] : nums2[y - 1];
            }

            if(((nums1Size + nums2Size) % 2) == 0){
                if(x == nums1Size){
                    min_right = nums2[y];
                }
                else if(y == nums2Size) {
                    min_right = nums1[x];
                }
                else {
                    min_right = nums1[x] < nums2[y] ? nums1[x] : nums2[y];
                }
                median = (double)(min_right + max_left) / 2.0;
                break;
                //return median;
            }
            else {
                median = (double)max_left;
                break;
                //return median;
            }
        }
    }
    return median;
}

int main(){
    int nums1[] = {1, 2};
    int nums2[] = {3, 4};
    int nums1Size = 2;
    int nums2Size = 2;
    double retval = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    printf("%f\n", retval);
    return 0;
}

