#include<stdio.h>
#include<ctype.h>

char* toLowerCase(char* s) {
    for(int i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

void main(void) {
    char string[20];
    printf("Introduceti stringul: ");
    scanf("%s", string);
    printf("%s", toLowerCase(string));
}