#include <stdio.h>
#include <math.h>

int main() {
	int M, N;
	int i, j;

	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++) {
		if (i == 1) continue;
		if (i == 2) printf("%d\n", i);
		if (i % 2 == 0 && i != 2) continue;
		for (j = 2; j < (int)sqrt(i); j++) {
			if (i % j == 0) break;
		}
		if (i % j == 0) continue;
		else printf("%d\n", i);
	}
}