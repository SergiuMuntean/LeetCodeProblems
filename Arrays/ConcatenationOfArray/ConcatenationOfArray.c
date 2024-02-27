#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void readArray(int* nums, int* numsSize) {
    printf("Enter the size of nums: ");
    scanf("%d", numsSize);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < *numsSize; i++) {
        scanf("%d", &nums[i]);
    }
}

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* ans = malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
    }
    for (int i = numsSize; i < *returnSize; i++) {
        ans[i] = nums[i - numsSize];
    }
    return ans;
}

main() {
    int nums[100], numsSize, returnSize;
    readArray(nums, &numsSize);
    int* ans = getConcatenation(nums, numsSize, &returnSize);
    printf("The result of the concatenation is: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}
