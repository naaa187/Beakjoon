#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, n = 0;
	int x, y, z;
	int count = 99;
	scanf("%d", &n);
	if (n < 100) {
		printf("%d", n);
	}
	else {
		for (i = 100; i <= n; i++) {
			x = i / 100;
			y = i % 100 / 10;
			z = i % 10;
			if ((x - y) == (y - z)) count++;
		}
		printf("%d", count);
	}
	return;
}