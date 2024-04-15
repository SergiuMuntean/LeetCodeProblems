#include<stdio.h>
#include<stdlib.h>

typedef enum  {green, blue, brown} eyeColor;

main() {
    int userInput;
    printf("Enter your eye color, 0 - green, 1 - blue, 2- brown.\n");
    do {
        scanf("%d", &userInput);
        eyeColor myEyeColor = (eyeColor)userInput;
        switch(myEyeColor) {
            case green: printf("Your eyecolor is green."); break;
            case blue: printf("Your eyecolor is blue."); break;
            case brown: printf("Your eyecolor is brown."); break;
            default: printf("Eyecolor doesn't exist.\n");
        }
        if(userInput != 0 && userInput != 1 && userInput != 2) {
            printf("The avaiable colors are: ");
            for(int i = green; i != brown + 1; i++) {
                printf("%d ", i);
            }
            printf("\nRenter your option:");
        }
    }
    while(userInput != 0 && userInput != 1 && userInput != 2);
    return 0;
}
