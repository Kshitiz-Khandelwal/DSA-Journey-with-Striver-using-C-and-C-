// Problem: Move Zeroes
// Approach: Two Pointer

#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}
