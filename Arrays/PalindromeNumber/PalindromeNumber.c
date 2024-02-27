#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    else {
        int number = x;
        long long result = 0;
        while (number) {
            result = result * 10 + number % 10;
            number /= 10;
        }
        if (x == result) {
            return true;
        }
        else {
            return false;
        }
    }
}

main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("Number is palindrome.");
    }
    else {
        printf("Number is not palindrome.");
    }
    return 0;
}
