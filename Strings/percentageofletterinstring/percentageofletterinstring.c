#include<stdio.h>
#include<math.h>
#include<string.h>

int percentageLetter(char* s, char letter) {
    int contor = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == letter) {
            contor++;
        }
    }
    int percentage;
    float fraction = (float) contor / strlen(s);
    if((int)(fraction * 10000) % 100 == 99) {
        percentage = (int) (ceil(fraction * 100));
    }
    else {
        percentage = (int) (floor(fraction * 100));
    }
    return percentage;
}

void main(void) {
    char string[30];
    printf("Enter your string: ");
    gets(string);
    char letter;
    printf("Enter your letter: ");
    scanf(" %c", &letter);
    printf("\nThe letter %c is appearing in %d%% proportion.", letter, percentageLetter(string, letter));
}