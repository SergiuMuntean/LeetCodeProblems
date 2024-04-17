#include<stdio.h>

struct Student {
    char nume[20];
    int varsta, nota;
};

struct Student* readStudents(struct Student* Studenti, int size) {
    printf("Introduceti studentii:\n");
    for(int i = 0; i < size; i++) {
        printf("Introduceti numele studentului %i:\n", i + 1);
        scanf("%s", Studenti[i].nume);
        printf("Introduceti varsta studentului %i:\n", i + 1);
        scanf("%d", &Studenti[i].varsta);
        printf("Introduceti nota studentului %i:\n", i + 1);
        scanf("%d", &Studenti[i].nota);
    }
    return Studenti;
}

void displayStudents(struct Student* Studenti, int size) {
    printf("Studentii nostri sunt:\n");
    for(int i = 0; i < size; i++) {
        printf("Studentul %d are numele %s, varsta %d si nota %d\n", i + 1, Studenti[i].nume, Studenti[i].varsta, Studenti[i].nota);
    }
}

main() {
    struct Student Studenti[30];
    printf("Introduceti numarul de studentii:\n");
    int size;
    scanf("%d", &size);
    readStudents(Studenti, size);
    displayStudents(Studenti, size);
    return 0;
}
