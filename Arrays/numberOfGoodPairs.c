#include<stdio.h>

void readArray(int* nums, int* numsSize) {
    scanf("%d", numsSize);
    printf("Enter your array: ");
    for(int i = 0; i < *numsSize; i++) {
        scanf("%d", &nums[i]);
    }
}

void printArray(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
}

int numIdenticalPairs(int* nums, int numsSize) {
    int value = 0;
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] == nums[j]) {
                value++;
            }
        }
    }
    return value;
}

void main(void) {
    int arr[20], size;
    printf("Enter the size of the array: ");
    readArray(arr, &size);
    printf("Your array is: ");
    printArray(arr, size);
    printf("\nThere are %d good pairs.", numIdenticalPairs(arr, size));
}