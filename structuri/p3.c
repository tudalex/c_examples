#include <stdio.h>
typedef struct {
	float latitudine, longitudine;
} coordonate;

typedef struct {
	char tip;
	int id_oras;
	coordonate pos; 
} obiectiv;
void print_obiectiv(obiectiv a) {
	printf("%c %d %lf %lf\n",a.tip, a.id_oras, a.pos.latitudine, a.pos.longitudine);
}
void print_for_city(obiectiv a, int city_id) {
	if (a.id_oras == city_id)
		print_obiectiv(a);
}
int main() {
	obiectiv a[10];
	a[0].tip='c';
	a[0].id_oras = 1;
	a[0].pos.latitudine = 10;
	a[0].pos.longitudine = 10;
	for (int i = 0; i < 10; ++i)
		print_for_city(a[i], 1);
	// Etc. restu le faci similar, accesezi si verifici daca exista obiective acolo
	// ca sa afisezi direct din vector faci a[i].tip, adica pui . imediat dupa
	return 0;
}