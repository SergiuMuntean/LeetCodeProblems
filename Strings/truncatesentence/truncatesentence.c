#include<stdio.h>
#include<string.h>

char* truncateSentence(char* s, int k) {
    int value = 0;
    for(int i = 0; i < strlen(s); i++) {
        if((int)s[i] == 32) {
            value++;
        }
        if(value == k) {
            s[i] = '\0';
            break;
        }
    }
    return s;
}

void main(void) {
    int value;
    char sentence[100];
    printf("Enter the sentence: ");
    gets(sentence);
    printf("Enter the number of words to keep: ");
    scanf("%d", &value);
    printf("%s", truncateSentence(sentence, value));
}