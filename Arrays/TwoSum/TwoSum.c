#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void readArray(int* nums, int* numsSize) {
    printf("Enter the size of the array: ");
    scanf("%d", numsSize);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < *numsSize; i++) {
        scanf("%d", &nums[i]);
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* returnNums = malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                returnNums[0] = i;
                returnNums[1] = j;
                return returnNums;
            }
        }
    }
    return returnNums;
}

main() {
    int numsSize = 0;
    int* nums = malloc(numsSize * sizeof(int));
    readArray(nums, &numsSize);
    printf("Enter the target: ");
    int target;
    scanf("%d", &target);
    int returnSize = 0;
    int* returnNums = twoSum(nums, numsSize, target, &returnSize);
    printf("The indexes are: %d %d", returnNums[0], returnNums[1]);
}
