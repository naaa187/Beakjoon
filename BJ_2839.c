#include<stdio.h>

int main() {
	int N;
	int five, three;
	scanf("%d", &N);
	five = N / 5;
	while (1) {
		if (five < 0) {
			printf("%d", -1);
			break;
		}
		if ((N - five * 5) % 3 == 0) {
			three = (N - five * 5) / 3;
			printf("%d", five + three);
			break;
		}
		five--;
	}
}