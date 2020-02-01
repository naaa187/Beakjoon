#include<stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int n = 0;
	if (B > C) {
		printf("%d", -1);
		exit(0);
	}
	while (n * C <= A + B * n) {
		n++;
	}
	printf("%d", n);
}
