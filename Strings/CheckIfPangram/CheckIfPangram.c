#include<stdio.h>
#include<stdbool.h>

bool checkIfPangram(char* sentence) {
    int value = 1;
    int arr[123] = {0};
    for(int i = 0; i < strlen(sentence); i++) {
        arr[(int)sentence[i]]++;
    }
    for(int i = 97; i < 123; i++) {
        if(arr[i] == 0) {
            value = 0;
            break;
        }
    }
    return value;
}

void main(void) {
    char sentence[100];
    printf("Enter your sentece: ");
    scanf("%s", sentence);
    printf("%d", checkIfPangram(sentence));
}