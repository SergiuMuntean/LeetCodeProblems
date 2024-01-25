#include<stdio.h>
#include<string.h>

char* restoreString(char* s, int* indices, int indicesSize) {
    for(int i = 0; i < indicesSize - 1; i++) {
        for(int j = i  + 1; j < indicesSize; j++) {
            if(indices[i] > indices[j]) {
                int aux = indices[i];
                indices[i] = indices[j];
                indices[j] = aux;
                char aux2 = s[i];
                s[i] = s[j];
                s[j] = aux2;
            }
        }
    }
    return s;
}

void main(void) {
    char word[20];
    int indices[20];
    printf("Enter string: ");
    scanf("%s", word);
    printf("Enter indices values: ");
    for(int i = 0; i < strlen(word); i++) {
        scanf("%d", &indices[i]);
    }
    printf("Your restored string is: ");
    printf("%s", restoreString(word, indices, strlen(word)));
}