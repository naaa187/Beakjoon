#include <stdio.h>
#include <stdlib.h>
#define MAX 8+1

int arr[MAX];
int visited[MAX];

void btr(int cnt, int N, int M) {

	int i;
	if (cnt == M) {
		for (i = 0; i < M; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}

	for (i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			arr[cnt] = i;
			btr(cnt + 1, N, M);
			visited[i] = 0;
		}
	}
}

int main() {
	int N, M;
	
	scanf("%d %d", &N, &M);

	btr(0, N, M);
	return 0;
}