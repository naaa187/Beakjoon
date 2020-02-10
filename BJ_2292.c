#include <stdio.h>

int main() {
	int N, i = 1;
	scanf("%d", &N);
	N--;
	while (N > 0) {
		i++;
		N -= 6 * i - 6;
	}
	printf("%d", i);
}