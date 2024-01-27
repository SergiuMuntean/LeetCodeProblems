#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* newArray =(int*) malloc(wordsSize * sizeof(int));
    *returnSize = 0;
    for(int i = 0; i < wordsSize; i++) {
        for(int j = 0; ; j++) {
            if(words[i][j] == '\0') {
                break;
            }
            if(words[i][j] == x) {
                newArray[(*returnSize)++] = i;
                break;
            }
        }
    }
    return newArray;
}

void main(void) {
    int* array;
    int returnSize = 0;
    int wordsSize;
    printf("Enter how many words you want: ");
    scanf("%d", &wordsSize);
    char* arrayOfWords[wordsSize];
    for(int i = 0; i < wordsSize; i++) {
        printf("Enter word %d: ", i);
        arrayOfWords[i] = malloc(50 * sizeof(char));
        scanf("%s", arrayOfWords[i]);

    }
    char x;
    printf("Enter the character you are looking for: ");
    scanf(" %c", &x);
    array = findWordsContaining(arrayOfWords, wordsSize, x, &returnSize);
    for(int i = 0; i < returnSize; i++) {
        printf("%d ", array[i]);
    }
}