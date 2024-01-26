#include<stdio.h>

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int contor = 0;
    for(int i = 0; i < hoursSize; i++) {
        if(hours[i] >= target) {
            contor++;
        }
    }
    return contor;
}

void main(void) {
    int hours[20], hoursSize;
    printf("Enter the number of employees: ");
    scanf("%d", &hoursSize);
    printf("Enter how much each employee worked: ");
    for(int i = 0; i < hoursSize; i++) {
        scanf("%d", &hours[i]);
    }
    int target;
    printf("Enter the target hours: ");
    scanf("%d", &target);
    printf("%d employees have met the target.", numberOfEmployeesWhoMetTarget(hours, hoursSize, target));
}