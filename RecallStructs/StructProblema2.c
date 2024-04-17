#include<stdio.h>

struct Student {
    char nume[30];
    int varsta, nota;
};

struct Classroom {
    int numarSala, capacitate;
    struct Student lider;
};

struct Classroom readClassroom(struct Classroom clasa) {
    printf("Introduceti numarul clasei:\n");
    scanf("%d", &clasa.numarSala);
    printf("Introduceti capacitatea salii:\n");
    scanf("%d", &clasa.capacitate);
    printf("Introduceti numele liderului clasei:\n");
    scanf("%s", clasa.lider.nume);
    printf("Introduceti varsta liderului:\n");
    scanf("%d", &clasa.lider.varsta);
    printf("Introduceti nota liderului:\n");
    scanf("%d", &clasa.lider.nota);
    return clasa;
}

void displayClassRoom(struct Classroom clasa) {
    printf("Numarul clasei %d, capacitatea clasei %d, liderul %s, varsta %d, nota %d", clasa.numarSala, clasa.capacitate, clasa.lider.nume, clasa.lider.varsta, clasa.lider.nota);
}

main() {
    struct Classroom clasa;
    clasa = readClassroom(clasa);
    displayClassRoom(clasa);
    return 0;
}
