#include <stdio.h>
#include <stdlib.h>
void solve(int *a, int poz, int size) {
	if (poz > size) // Daca iesim din vector ne oprim
		return;
	printf("%d ", a[poz]); // Afisam elementul de de pozitie
	solve(a, poz+2, size); // Apelam recursiv, crescand poz cu 2

}
int main() {
	int i, n;
	int *a = (int*)malloc(sizeof(int)*128); //Creeam un vector cu 128 de elemnte, defapt alocam memorie pentru el

	scanf("%d ", &n); // Citesc numarul de elemente
	for (i = 0; i < n; ++ i)
		scanf("%d", &a[i]);
	solve(a,0,n);
	printf("\n");
	return 0;
}