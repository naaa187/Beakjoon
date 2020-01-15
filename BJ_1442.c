#include <stdio.h>
#include <stdlib.h>

int check(int n) {
	int count = 0;
	int digit = n % 2;
	n /= 2;
	while (1) {
		if (count == 2) return 1;
		if (n == 0) return 0;
		if (n % 2 == digit) count++;
		else {
			count = 0;
			digit = n % 2;
		}
		n /= 2;
	}
}

int main() {
	int min, max;
	int i, count = 0;
	scanf("%d %d", &min, &max);

	for (i = min; i <= max; i++) {
		if (check(i) == 1) {
			count++;
			printf("%d ", i);
		}
	}

	printf("%d", count);
}