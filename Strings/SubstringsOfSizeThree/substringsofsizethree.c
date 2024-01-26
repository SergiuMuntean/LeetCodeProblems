#include<stdio.h>

int countGoodSubstrings(char* s) {
    int count = 0;
    for(int i = 2; i < strlen(s); i++) {
        int contor = 0;
        if(s[i] == s[i - 1] || s[i] == s[i - 2] || s[i - 1] == s[i - 2]) {
            contor++;
        }
        if(contor == 0) {
            count++;
        }
    }
    return count;
}

void main(void) {
    char string[20];
    printf("Enter your string: ");
    gets(string);
    printf("There are %d good substrings", countGoodSubstrings(string));
}