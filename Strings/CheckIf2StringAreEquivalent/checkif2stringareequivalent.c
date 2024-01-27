#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int sum = 0;
    for(int i = 0; i < word1Size; i++) {
        sum += strlen(word1[i]);
    }
    char* returnWord1 = malloc(sum + 1);
    returnWord1[0] = '\0';

    int sum2 = 0;
    for(int i = 0; i < word2Size; i++) {
        sum2 += strlen(word2[i]);
    }
    char* returnWord2 = malloc(sum2 + 1);
    returnWord2[0] = '\0';

    for(int i = 0; i < word1Size; i++) {
        strcat(returnWord1, word1[i]);
    }

    for(int i = 0; i < word2Size; i++) {
        strcat(returnWord2, word2[i]);
    }

     if(strcmp(returnWord1, returnWord2) == 0) {
        free(returnWord1);
        free(returnWord2);
        return true;
    }
    else {
        free(returnWord1);
        free(returnWord2);
        return false;
    }
}

int main(void) {
    char* string1[2] = {"ab", "c"};
    char* string2[2] = {"a", "bc"};

    if(arrayStringsAreEqual(string1, 2, string2, 2)) {
        printf("Strings are equal.\n");
    } 
    else {
        printf("Strings are not equal.\n");
    }

    return 0;
}