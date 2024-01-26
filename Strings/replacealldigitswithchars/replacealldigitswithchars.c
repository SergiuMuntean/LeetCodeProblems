#include<stdio.h>
#include<string.h>

char* replaceDigits(char* s) {
    for(int i = 1; i < strlen(s); i = i + 2) {
        int value = (int) (s[i] - '0');
        s[i] = s[i - 1] + value;
    }
    return s;
}

void main(void) {
    char string[30];
    printf("Enter your string: ");
    gets(string);
    printf("The transformed string is: %s", replaceDigits(string));
}