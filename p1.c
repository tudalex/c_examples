#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c) {
	
	int *min; // Un pointer in care tin minimul
	min = a; //Se copiaza doar continutul lui a, adica adresa valorii, nu si valoarea
	// Caut valoare minima, o pun in a si apoi raman celelalte 2 valori in b si c
	// verific si daca acelea sunt in ordine si am terminat
	if (*min > *b) //Folosesc * ca sa iau valoare de la acea adresa
		min = b;
	if (*min > *c)
		min = c;
	
	if (b == min) { // Compar cu adresa stocata la b cu min ca sa vad daca minimul e aici
		int t; // Variabila temporara pentru swap
		t = *a;
		*a = *b;
		*b = t;
	} else if (c == min) { // Idem b, doar ca cu c
		int t;
		t = *a;
		*a = *c;
		*c = t;
	}
	
	if (*b > *c) { //Compar valorile
		int t;
		t = *b;
		*b = *c;
		*c = t;
	}
	
}
int main() {
	// Alocam memoria pentru pointeri
	int *a = (int*)malloc(sizeof(int)); // Trebuie castuita la (int*) ca malloc intoarce (void*)
	int *b = (int*)malloc(sizeof(int)); // Idem
	int *c = (int*)malloc(sizeof(int)); // Idem

	scanf("%d %d %d", a, b, c); // Fiind ca sunt pointeri nu mai trebuie sa folosim operatorul & deoarece ei contin adresele de memorie unde trebuiesc scrise datele 
	sort(a, b, c);
	printf("%d %d %d\n", *a, *b, *c); // Trebuie stelute ca trebuie trimise valorile
	return 0;
}