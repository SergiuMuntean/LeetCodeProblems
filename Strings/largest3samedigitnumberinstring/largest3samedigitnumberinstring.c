#include<stdio.h>
#include<string.h>

char* largestGoodInteger(char* num) {
    char value;
    char max = '0';
    int found = 0;
    for (int i = 2; i < strlen(num); i++) {
        if (num[i] == num[i - 1] && num[i] == num[i - 2]) {
            value = num[i];
            found = 1;
            if (value > max) {
                max = value;
            }
        }
    }
    if (found) {
        num[0] = max;
        num[1] = max;
        num[2] = max;
        num[3] = '\0';
        return num;
    }
    else {
        num[0] = '\0';
        return num;
    }
}

void main(void) {
    char num[20] = "6777133339";
    printf("%s", largestGoodInteger(num));
}