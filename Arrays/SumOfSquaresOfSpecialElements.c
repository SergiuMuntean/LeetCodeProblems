#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {
    int nums[50], numsSize;
    printf("Enter the nums size: ");
    scanf("%d", &numsSize);
    printf("Enter the elements of the array nums: ");
    for (int i = 1; i <= numsSize; i++) {
        scanf("%d", &nums[i - 1]);
    }
    printf("The sum of squares is: %d", sumOfSquares(nums, numsSize));
    return 0;
}
int sumOfSquares(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (numsSize % i == 0) {
            sum += nums[i - 1] * nums[i - 1];
        }
    }
    return sum;
}
