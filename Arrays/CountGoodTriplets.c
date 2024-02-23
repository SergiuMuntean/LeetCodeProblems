#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int countGoodTriplets(int*, int, int, int);

main() {
    int arr[100], arrSize, a, b, c;
    printf("Enter the array size: ");
    scanf("%d", &arrSize);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("There are %d triplets", countGoodTriplets(arr, arrSize, a, b, c));
    return 0;
}

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int contor = 0;
    for (register int i = 0; i < arrSize - 2; i++) {
        for (register int j = i + 1; j < arrSize - 1; j++) {
            for (register int k = j + 1; k < arrSize; k++) {
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                    contor++;
                }
            }
        }
    }
    return contor;
}
