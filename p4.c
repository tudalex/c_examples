#include <stdio.h>
#include <stdlib.h>

void citire(int a[][128], int *v, int n, int m) { //poti folosi si v[] in loc de *v
	// La o matrice multidimensionala poti sa nu specifici prima dimensiune, dar urmatoarele trebuie sa le specifici
	// Alta idee era sa faci un vector de pointeri catre vectori dar iti trebuia alocare dinamica
	// cu alocare statica eu nu am alta idee cum sa trimit matricea ca parametru.
	int i, j;
	// Prima data citim vectorul
	for (i = 0; i < n; ++ i)
		scanf("%d", &v[i]);
	// Apoi citim matricea
	for (i = 0; i < n; ++ i)
		for (j = 0; j < n; ++ j)
			scanf("%d", &a[i][j]); // Vezi ca aici trebuie sa folosesc &, pentru ca scanf primeste pointeri
}
int main() {
	int n, m;
	int v[128];
	int a[128][128];
	int i, j;
	scanf("%d %d", &n , &m);
	citire(a, v, n, m);
	 
	// Pentru fiecare coloana
	for (i = 0; i < m; ++ i) {
		int bun = 1;
		//Pentru fiecare element de pe acea coloana
		for (j = 0; j < n; ++ j)
			if (a[j][i] != v[j]) { // Daca nu sunt identice, inseamna ca coloana nu e buna
				bun = 0;
				break; // Iese din for fara sa mai continue
			}
		if (bun)
			printf("Coloana %d este identica cu vectorul.\n", i);
	}
	return 0;

}