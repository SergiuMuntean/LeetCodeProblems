#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class Persoana {
protected:
	char nume[30];
	char prenume[30];
public:
	Persoana() {}
	Persoana(const char* nume, const char* prenume);
	void afisare();
	~Persoana();
};

Persoana::Persoana(const char* nume, const char* prenume) {
	strcpy(Persoana::nume, nume);
	strcpy(Persoana::prenume, prenume);
}

void Persoana::afisare() {
	cout << "Numele: " << nume << endl;
	cout << "Prenumele: " << prenume << endl;
}

Persoana::~Persoana() {
	cout << "Destructor called pentru persoana." << endl;
}

class Salariu {
protected:
	float salariu;
public:
	Salariu() {}
	Salariu(float);
	void afisare();
	~Salariu();
};

Salariu::Salariu(float salariu) {
	Salariu::salariu = salariu;
}

void Salariu::afisare() {
	cout << "Salariul este: " << salariu << endl;
}

Salariu::~Salariu() {
	cout << "Distrugere salariu." << endl;
}

class Angajat : Salariu, Persoana {
private:
	int varsta;
public:
	Angajat() {}
	Angajat(const char* nume, const char* prenume, float salariu, int varsta) : Persoana(nume, prenume), Salariu(salariu) {
		Angajat::varsta = varsta;
	}
	void afisare();
	char* getNume();
};

void Angajat::afisare() {
	Persoana::afisare();
	Salariu::afisare();
	cout << "Varsta: " << varsta << endl;
	cout << endl;
}

char* Angajat::getNume() {
	return nume;
}

int main() {
	Persoana p("Popescu", "Ionel");
	p.afisare();
	Salariu s(3000.0);
	s.afisare();
	Angajat angajati[20];
	
	int opt = 3;
	int nr = 0;
	do {
		cout << "1 - Introduceti Angajatul" << endl;
		cout << "2 - Afisare angajati" << endl;
		cout << "3 - Cautare angajati" << endl;
		cout << "4 - Stergere angajat" << endl;
		cout << "0 - Iesire" << endl;
		cout << "Dati optiunea: " << endl;
		cin >> opt;
		getchar();
		switch(opt) {
			case 1: {
				cout << "Dati numarul de angajati: ";
				cin >> nr;
				getchar();
				for (int i{ 0 }; i < nr; i++) {
					cout << "Introduceti numele: ";
					char nume[30];
					cin.getline(nume, 30);
					cout << "Introduceti prenumele: ";
					char prenume[30];
					cin.getline(prenume, 30);
					float salariu;
					cout << "Introduceti salariul: ";
					cin >> salariu;
					getchar();
					int varsta;
					cout << "Introduceti varsta: ";
					cin >> varsta;
					getchar();
					angajati[i] = Angajat(nume, prenume, salariu, varsta);
				}
				break;
			}
			case 2: {
				for (int i = 0; i < nr; i++) {
					angajati[i].afisare();
				}
				break;
			}
			case 3: {
				char nume[30];
				cout << "Introduceti numele: ";
				cin.getline(nume, 30);
				bool gasit = false;
				for (int i = 0; i < nr; i++) {
					if (strcmp(nume, angajati[i].getNume()) == 0) {
						cout << "Persoana: " << nume << " a fost gasita." << endl;
						gasit = true;
						break;
					}
				}
				if (!gasit) {
					cout << "Persoana: " << nume << " nu a fost gasita." << endl;
				}
				break;
			}
			case 4: {
				char nume[30];
				cout << "Introduceti numele: ";
				cin.getline(nume, 30);
				for (int i{ 0 }; i < nr; i++) {
					if (strcmp(nume, angajati[i].getNume()) == 0) {
						for (int j{ i }; j < nr - 1; j++) {
							angajati[j] = angajati[j + 1];
						}
						nr--;
						break;
					}
				}
				break;
			}
			case 0: cout << "Iesire." << endl; return 0;
			default: {
				cout << "Optiune gresita. Reintroduceti optiunea." << endl;
				break;
			}
		}
	} while (opt);
	system("pause");
	return 0;
}
