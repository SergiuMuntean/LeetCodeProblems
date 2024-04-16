#include<stdio.h>

typedef enum {food, wood, gold, stone} resources;

void readArray(int* arr) {
    printf("Enter the amount of food:\n");
    scanf("%d", &arr[food]);
    printf("Enter the amount of wood:\n");
    scanf("%d", &arr[wood]);
    printf("Enter the amount of gold:\n");
    scanf("%d", &arr[gold]);
    printf("Enter the amount of stone:\n");
    scanf("%d", &arr[stone]);
}

void displayArray(int* arr) {
    printf("There is %d food\n", arr[food]);
    printf("There is %d wood\n", arr[wood]);
    printf("There is %i gold\n", arr[gold]);
    printf("There is %i stone\n", arr[stone]);
}

void addResources(int* arr, resources option) {
    printf("Enter how much of the selected resource you want to add to your container (must be positive integer):\n");
    int value;
    scanf("%d", &value);
    switch(option) {
        case food: arr[food] += value; break;
        case wood: arr[wood] += value; break;
        case gold: arr[gold] += value; break;
        case stone: arr[stone] += value; break;
    }
}

void removeResources(int* arr, resources option) {
    printf("Enter how much of the selected resource you want to remove from your container (must be positive integer):\n");
    int value;
    scanf("%d", &value);
    switch(option) {
        case food: arr[food] -= value; break;
        case wood: arr[wood] -= value; break;
        case gold: arr[gold] -= value; break;
        case stone: arr[stone] -= value; break;
    }
}

main() {
    printf("Welcome to your inventory, here you can store resources, display them, add or remove.\n");
    printf("Let's start by storing your first resources:\n");
    int arr[4];
    readArray(arr);
    displayArray(arr);
    printf("Now that you have your resorces input, let's make the necessary modifications.\n");
    printf("If you want to leave the program, press 0.\n");
    printf("If you want to add resources press 1.\n");
    printf("If you want to remove resources press 2.\n");
    printf("If you want to display your invetory press 3.\n");
    int choice;
    scanf("%d", &choice);
    while(choice != 0 && choice != 1 && choice != 2 && choice != 3) {
        printf("Wrong choice, renter your choice.\n");
        printf("Press any key to continue.\n");
        getchar();
        printf("Enter your choice:\n");
        scanf("%d", &choice);
    }
    int iteration = 0;
    do {
        if(iteration > 0) {
            printf("What do you want to do next? (0 - Exit, 1 - Add Resources, 2 - Remove Resources, 3 - Display Inventory):\n");
            scanf("%d", &choice);
        }
        iteration++;
        switch(choice) {
            case 1: {
                printf("Enter the type of resource (0 - food, 1 - wood, 2 - gold, 3 - stone):\n");
                int userInput;
                printf("Enter your choice:\n");
                scanf("%d", &userInput);
                while(userInput != food && userInput != wood && userInput != gold && userInput != stone) {
                    printf("Wrong option, renter your choice!\n");
                    scanf("%d", &userInput);
                }
                resources option = (resources) userInput;
                addResources(arr, option);
                break;
            }
            case 2: {
                printf("Enter the type of resource (0 - food, 1 - wood, 2 - gold, 3 - stone):\n");
                int userInput;
                printf("Enter your choice:\n");
                scanf("%d", &userInput);
                while(userInput != food && userInput != wood && userInput != gold && userInput != stone) {
                    printf("Wrong option, renter your choice!\n");
                    scanf("%d", &userInput);
                }
                resources option = (resources) userInput;
                removeResources(arr, option);
                break;
            }
            case 3: {
                displayArray(arr); break;
            }
            case 0: {
                printf("Are you sure you want to exit?(1 - Yes, 0 or Any other number - No)\n");
                int opt;
                scanf("%d", &opt);
                if(opt == 1) {
                    return 0;
                }
            }
        }
    } while(choice == food || choice == wood || choice == gold || choice == stone);
}
