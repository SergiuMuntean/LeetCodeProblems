#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;

class Pagini {
protected:
	int nrPagini;
public:
	Pagini(int nrPagini) {
		Pagini::nrPagini = nrPagini;
		cout << "Am invocat constructorul pentru nr pagini: " << nrPagini << endl;
	}
	void afisare();
	~Pagini();
};

void Pagini::afisare() {
	cout << "Cartea are " << nrPagini << endl;
	cout << endl;
}

Pagini::~Pagini() {
	cout << "Am invocat destructorul pentru nr pagini: " << nrPagini << endl;
}

class Carte {
protected:
	char titlu[30];
	char autor[30];
	int ISBN;
public:
	Carte(const char* titlu, const char* autor, int ISBN) {
		strcpy(Carte::titlu, titlu);
		strcpy(Carte::autor, autor);
		Carte::ISBN = ISBN;
		cout << "Am invocat constructorul pentru carte." << endl;
	}
	void afisare();
	~Carte();
};

void Carte::afisare() {
	cout << "Titlu: " << titlu << endl;
	cout << "Autor: " << autor << endl;
	cout << "ISBN: " << ISBN << endl;
}

Carte::~Carte() {
	cout << "Am invocat destructorul pentru carte." << endl;
}

class FisaDeBiblioteca : Pagini, Carte {
private:
	char dataImprumut[30], dataReturnari[30], numeleCititorului[30];
public:
	FisaDeBiblioteca(const char* titlu, const char* autor, int ISBN, int nrPagini, const char* d, const char* r, const char* c)
	: Pagini(nrPagini), Carte(titlu, autor, ISBN) {
		strcpy(dataImprumut, d);
		strcpy(dataReturnari, r);
		strcpy(numeleCititorului, c);
	}
	void afisare() {
		Carte::afisare();
		Pagini::afisare();
		cout << "Data imprumutului: " << dataImprumut << endl;
		cout << "Data returnarii: " << dataReturnari << endl;
		cout << "Numele cititorului: " << numeleCititorului << endl;
		cout << endl;
	}
	~FisaDeBiblioteca();
};

FisaDeBiblioteca::~FisaDeBiblioteca() {
	cout << "Am invocat destructorul pentru fisa de biblioteca." << endl;
}

int main() {
	FisaDeBiblioteca fisa("POO", "Daniel Petrescu", 11234, 250, "20.11.2024", "27.11.2024", "Ionel Popescu");
	fisa.afisare();
	Carte carteaMea("Baze de date", "Cosmin Gorun", 20345);
	carteaMea.afisare();
	Pagini nr(234);
	nr.afisare();
	return 0;
}
