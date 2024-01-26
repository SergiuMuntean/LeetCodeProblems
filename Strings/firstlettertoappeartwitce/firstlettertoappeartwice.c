#include<stdio.h>

char repeatedCharacter(char* s) {
    int arr[123] = {0};
    for(int i = 0; i < strlen(s); i++) {
        for(int j = 97; j < 123; j++) {
            if((int)s[i] == j) {
                arr[j]++;
                if(arr[j] == 2) {
                    return (char) j;
                }
            }
        }
    }
    return NULL;
}

void main(void) {
    char string[20];
    printf("Enter your string: ");
    gets(string);
    printf("Your string is: %s\n", string);
    printf("The character is: %c", repeatedCharacter(string));
}