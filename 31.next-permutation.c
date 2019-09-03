/*
 * @lc app=leetcode id=31 lang=c
 *
 * [31] Next Permutation
 */


void swap(int*, int, int);
void reverse(int*, int, int);
void nextPermutation(int* nums, int numsSize){
    int end = numsSize - 1;
    int i = end - 1;
    while(i >= 0 && nums[i] >= nums[i + 1]){
        i--;
    }
    
    if(i >= 0){
        int j = end;
        while(j >= 0 && nums[j] <= nums[i]){
            j--;
        }
        swap(nums, i, j);
    }
    reverse(nums, i + 1, end);
}

void swap(int* nums, int i, int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void reverse(int *nums, int start, int end){
    int i = start;
    int j = end;
    while(i < j){
        swap(nums, i, j);
        i++;
        j--;
    }
}


