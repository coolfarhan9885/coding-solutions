/**
*RUNNING SUM OF 1d ARRAY
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i;
    int* result = (int*)malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    if (numsSize == 0)
        return result;

    result[0] = nums[0];

    for (i = 1; i < numsSize; i++)
    {
        result[i] = result[i - 1] + nums[i];
    }

    return result;
}