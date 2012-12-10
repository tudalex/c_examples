#include <stdio.h>
#include <stdlib.h>
int solve(int x) { // x se copiaza in aceasta functie
	int k = x%10; // Luam cea mai nesimnificativa cifra din x
	if (x == 0)
		return x;
	if (k%2 == 0)
		return solve(x/10)*10+k; // Pastram cifra
	else
		return solve(x/10); // Uitam de ea
}
int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", solve(a));
	return 0;
}