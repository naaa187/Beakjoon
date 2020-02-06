#include<stdio.h>

int main() {
	int V, A, B, n;
	scanf("%d %d %d", &A, &B, &V);
	n = (V - B) / (A - B);
	if ((V - B) % (A - B) > 0) n++;
	printf("%d", n);
}