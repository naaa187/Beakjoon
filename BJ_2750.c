#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, temp, N;
	int* arr;
	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N ; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N ; i++) {
		for (j = 0;j < N - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < N ; i++) {
		printf("%d\n", arr[i]);
	}
}