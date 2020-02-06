#include<stdio.h>

int main() {
	int A, B, C, n;
	scanf("%d %d %d", &A, &B, &C);
	n = 0;
	if (B >= C) {
		printf("%d", -1);
		exit(0);
	}
	n = A / (C - B) + 1;
	printf("%d", n);
}