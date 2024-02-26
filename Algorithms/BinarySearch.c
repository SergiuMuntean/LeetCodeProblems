#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int search(int* nums, int numsSize, int target) {
    int st = 0;
    int dr = numsSize - 1;
    int mid = (st + dr) / 2;
    while (st <= dr) {
        mid = (st + dr) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (target < nums[mid]) {
            dr = mid - 1;
        }
        else if (target > nums[mid]) {
            st = mid + 1;
        }
    }
    return -1;
}

void readArray(int* nums, int* numsSize) {
    printf("Insert nums size: ");
    scanf("%d", numsSize);
    printf("Insert the nums elements: ");
    for (int i = 0; i < *numsSize; i++) {
        scanf("%d", &nums[i]);
    }
}

main() {
    int arr[100], arrSize, target;
    readArray(arr, &arrSize);
    printf("Insert the element you want to find (target): ");
    scanf("%d", &target);
    int result = search(arr, arrSize, target);
    if (result != - 1) {
        printf("The index of the target is: %d", result);
    }
    else {
        printf("The element doesn't exist.");
    }
}
