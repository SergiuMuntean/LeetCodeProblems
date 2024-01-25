#include<stdio.h>
#include<string.h>

int numJewelsInStones(char* jewels, char* stones) {
    int contor = 0;
    for(int i = 0; i < strlen(jewels); i++) {
        for(int j = 0; j <strlen(stones); j++) {
            if(stones[j] == jewels[i]) {
                contor++;
            }
        }
    }
    return contor;
}

void main(void) {
    char jewels[20];
    char* stones[20];
    printf("Insert the jewels: ");
    scanf("%s", jewels);
    printf("Insert the strones: ");
    scanf("%s", stones);
    printf("%d", numJewelsInStones(jewels, stones));
}