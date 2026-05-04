#include <stdio.h>

/*
 * Function: removeDuplicates
 * -----------------------------------
 * Removes duplicates from a sorted array in-place.
 *
 * nums: pointer to the array
 * numsSize: size of the array
 *
 * returns: number of unique elements
 */

int removeDuplicates(int* nums, int numsSize) {

    // Edge case: empty array
    if (numsSize == 0) {
        return 0;
    }

    // i -> index of last unique element
    int i = 0;

    // j -> scans the array
    for (int j = 1; j < numsSize; j++) {

        /*
         * If current element is different from last unique,
         * we found a new unique element
         */
        if (nums[j] != nums[i]) {
            i++;                // move to next position
            nums[i] = nums[j];  // place unique element
        }
    }

    /*
     * Since index starts from 0,
     * total unique elements = i + 1
     */
    return i + 1;
}
