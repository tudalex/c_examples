#include <stdio.h>
typedef struct { //folosim typedef ca sa numim tipul de date
	char tip;
	float raza;
	float lungime;
	float latime;
} forma /*denumirea tipului de date*/;

// daca nu folosim typedef atunci
// se declara
// struct forma {
// 	char tip;
// 	float raza;
// 	float lungime;
// 	float latime;
// };
// si apoi se foloste tot timpul ca "struct forma" (fara ghilimele)
void print_forma(forma x) {
	if (x.tip == 'c')
	printf("Raza cercului este: %lf\n", x.raza);
	//TODO: Completat si pentru celelalte cazuri
}

int main() {
	forma a;
	a.tip = 'c';
	a.raza = 10;
	print_forma(a);

	return 0;
}