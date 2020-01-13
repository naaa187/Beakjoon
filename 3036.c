#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, j, N;
	int* wheel;
	int* divisor;
	int a, num = 0;
	scanf("%d", &N);
	wheel = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++) {
		scanf("%d", &wheel[i]);
	}
	divisor = (int*)malloc(sizeof(int) * (int)sqrt(wheel[0]));

	num = 2;
	a = wheel[0];

	for (i = 0; num <= wheel[0] && i < (int)sqrt(wheel[0]);) {
		if (a == 1) break;
		while (a % num == 0) {
			divisor[i] = num;
			a /= num;
			i++;
		}
		num++;
	}

	for (i = 1; i < N; i++) {
		a = wheel[0];
		for (j = 0; j < sizeof(divisor); j++) {
			if (wheel[i] % divisor[j] == 0) {
				wheel[i] /= divisor[j];
				a /= divisor[j];
			}
		}
		printf("%d/%d\n", a, wheel[i]);
	}
}