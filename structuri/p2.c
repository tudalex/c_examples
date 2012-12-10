#include <stdio.h>
typedef struct {
	int ora, minut, secunda;
} timp;
void aduna(timp *x, timp y) {
	// Daca e pointer accesezi elementele din el folosind ->, in loc de .
	x->minut += (x->secunda+y.secunda)/60;
	x->secunda = (x->secunda+y.secunda)%60;
	
	x->ora += (x->minut+y.minut)/60;
	x->minut = (x->minut+y.minut)%60;

	x->ora  = (x->ora+y.ora)%24;
}
void print_timp(timp x) {
	printf("%d:%d:%d\n", x.ora, x.minut, x.secunda);
}
void citire_timp(timp *x) {
	scanf("%d %d %d", &(x->ora), &(x->minut),&(x->secunda));
}
int main() {
	//timp a = {23, 59, 29};
	timp a;
	timp durata = { 2, 23, 40}; //Poti sa initializezi si asa
	citire_timp(&a);
	aduna(&a, durata);
	print_timp(a);
	return 0;
}