#include <stdio.h>

int main() {
	int T, H, W, N, i;
	int x, y;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d", &H, &W, &N);
		x = N % H;
		y = N / H + 1;

		if (x == 0) {
			x = H;
		}
		if (!(N % H)) {
			y -= 1;
		}
		printf("%d\n", x * 100 + y);
	}
}