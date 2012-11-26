#include <stdio.h>
#include <stdlib.h>
void solve(int *a, int poz, int size) {
	if (poz > size) // Daca iesim din vector ne oprim
		return;
	printf("%d ", a[poz]); // Afisam elementul de de pozitie
	solve(a, poz+2, size); // Apelam recursiv, crescand poz cu 2

}
void citire(int *a, int *pointer_n) {
	int i;
	scanf("%d ", pointer_n); // Citesc numarul de elemente
	for (i = 0; i < *pointer_n; ++ i)
		scanf("%d", &a[i]);
}
int main() {
	int i, n;
	int a[128]; 
	citire(a,&n);
	solve(a,0,n);
	printf("\n");
	return 0;
}