#include<stdio.h>

typedef struct {
    char titlu[30];
    char autor[30];
    int an, isbn;
} Book;

typedef enum {iesire, adauga, afiseaza, sterge, cauta} optiune;

void citesteCarti(Book* carte, int number) {
    for(int i = 0; i < number; i++) {
        printf("Introduceti cartea %d.\n", i + 1);
        printf("Introduceti titlul cartii:\n");
        scanf("%s", carte[i].titlu);
        printf("Introduceti numele autorului:\n");
        scanf("%s", carte[i].autor);
        printf("Introduceti anul aparitiei:\n");
        scanf("%d", &carte[i].an);
        printf("Introduceti isbn-ul cartii:\n");
        scanf("%d", &carte[i].isbn);
    }
}

void afiseazaCarte(Book* carte, int number) {
    for(int i = 0; i < number; i++) {
        printf("Numele cartii este: %s\n", carte[i].titlu);
        printf("Autorul este: %s\n", carte[i].autor);
        printf("Anul aparitiei este: %d\n", carte[i].an);
        printf("Isbn-ul cartii este: %d\n", carte[i].isbn);
    }
}

void adaugaCarte(Book* carte, int* number) {
    printf("Introduceti cartea %d.\n", *number);
    printf("Introduceti titlul cartii:\n");
    scanf("%s", carte[(*number) - 1].titlu);
    printf("Introduceti numele autorului:\n");
    scanf("%s", carte[(*number) - 1].autor);
    printf("Introduceti anul aparitiei:\n");
    scanf("%d", &carte[(*number) - 1].an);
    printf("Introduceti isbn-ul cartii:\n");
    scanf("%d", &carte[(*number) - 1].isbn);
}

void stergeCarte(Book* carte, int* number, int indexStergere) {
    *number = *number - 1;
    for(int i = indexStergere - 1; i < *number; i++) {
        carte[i] = carte[i + 1];
    }
    carte = realloc(carte, (*number) * sizeof(Book));
}

int cautaCarte(Book* carte, int number, char denumire[], int* pos) {
    for(int i = 0; i < number; i++) {
        if(strcmp(carte[i].titlu, denumire) == 0 || strcmp(carte[i].autor, denumire) == 0) {
            *pos = i + 1;
            return 1;
        }
    }
    return 0;
}

main() {
    printf("Introdu numarul de carti:\n");
    int number;
    scanf("%d", &number);
    Book* carte = malloc(number * sizeof(Book));
    citesteCarti(carte, number);

    int userInput;
    optiune option;
    do {
        printf("Introdu optiunea: (0 - Iesire, 1 - Adauga Carte, 2 - Afiseaza Carti, 3 - Stergere Carte, 4 - Cauta Carte)\n");
        scanf("%d", &userInput);
        option = (optiune) userInput;
        switch(option) {
            case iesire: free(carte); return 0;
            case adauga: {
                number++;
                carte = realloc(carte, number * sizeof(Book));
                adaugaCarte(carte, &number); break;
            }
            case afiseaza: afiseazaCarte(carte, number); break;
            case sterge: {
                printf("Introdu indexul carti de sters:\n");
                int index;
                scanf("%d", &index);
                stergeCarte(carte, &number, index); break;
            }
            case cauta: {
                printf("Introdu titlul cartii sau autorul, (de exemplu: BatranulSiMarea sau ErnestHemingway):\n");
                char denumire[30];
                scanf("%s", denumire);
                int pos;
                if(cautaCarte(carte, number, denumire, &pos)) {
                    printf("Cartea %s a fost gasita pe pozitia %i.\n", denumire, pos);
                }
                else {
                    printf("Cartea %s nu a fost gasita.\n", denumire);
                }
                break;
            }
        }
    } while(option != iesire);
}
