#include <stdio.h>

int main() {
	int i = 1, X;

	scanf("%d", &X);

	while (X > i) {
		X -= i;
		i++;
	}

	i++;

	if (i % 2 == 0) printf("%d/%d", i - X, X);
	else printf("%d/%d", X, i - X);
}