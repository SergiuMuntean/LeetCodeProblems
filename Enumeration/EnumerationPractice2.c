#include<stdio.h>
#include<stdlib.h>

typedef enum {chicken, pasta, pizza, soup} food;

void chosenFood(food meal) {
    switch(meal) {
        case chicken: printf("You have picked chicken for lunch."); break;
        case pasta: printf("You have picked pasta for lunch."); break;
        case pizza: printf("You have picked pizza for lunch."); break;
        case soup: printf("You have picked soup for lunch."); break;
    }
}

main() {
    int option;
    printf("Enter your meal (option 0 - chicken, 1 - pasta, 2 - pizza, 3 - soup): ");
    scanf("%d", &option);
    food meal1 = (food)option;
    chosenFood(meal1);
}
