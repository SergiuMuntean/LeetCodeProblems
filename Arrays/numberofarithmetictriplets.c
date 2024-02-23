#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arithmeticTriplets(int*, int, int);

main() {
    int nums[200];
    int numsSize;
    printf("Please input the dimension of array: ");
    scanf("%d", &numsSize);
    int diff;
    printf("Please input the value of diff: ");
    scanf("%d", &diff);
    printf("Please insert the elements of the array: ");
        for (int i = 0; i < numsSize; i++) {
            scanf("%d", &nums[i]);
        }
    printf("The number of triplets with the property is: %d", arithmeticTriplets(nums, numsSize, diff));
}

int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int contor = 0;
    for (register int i = 0; i < numsSize - 2; i++) {
        for (register int j = i + 1; j < numsSize - 1; j++) {
            for (register int k = j + 1; k < numsSize; k++) {
                if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) {
                    contor++;
                }
            }
        }
    }
    return contor;
}
