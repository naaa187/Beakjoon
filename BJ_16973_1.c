#include <stdio.h>
#include <stdlib.h>


void wall(int** arr, int a, int b, int n, int m, int h, int w) {
	int i, j;
	for (i = a - h + 1; i < a + h;i++) {
		for (j = b - w + 1;j < b + w;j++)
			if (i >= 0 && i < n && j >= 0 && j < m && arr[i][j] != 1) arr[i][j] = -1;
	}
}

int main() {
	int i, j, n, m;
	int** arr;
	int h, w;
	int sr, sc;
	int fr, fc;
	int r, c;
	int count = 0;

	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int*) * (n));

	for (i = 0;i < n;i++)
		arr[i] = (int)malloc(sizeof(int) * (m));

	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++)
			scanf("%d", &arr[i][j]);
	}

	scanf("%d %d", &h, &w);
	scanf("%d %d", &sr, &sc);
	scanf("%d %d", &fr, &fc);

	sr--; sc--; fr--; fc--;

	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++)
			if (arr[i][j] == 1) {
				wall(arr, i, j, n, m, h, w);
			}
	}

	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	r = sr; c = sc;

	while (1) {
		printf("(%d, %d)\n", r + 1, c + 1);
		if (r == fr && c == fc) break;
		if (count >= n * m) { count = -1; break; }
		if (abs(fr - r) > abs(fc - c)) {
			if (fr > r&& arr[r + 1][c] == 0) r++;
			else if (fr < r && arr[r - 1][c] == 0) r--;
			else if (fc > c&& arr[r][c + 1] == 0) c++;
			else if (fc < c && arr[r][c - 1] == 0) c--;

			else if (fc > c&& arr[r][c - 1] == 0) c--;
			else if (fc < c && arr[r][c + 1] == 0) c++;
			else if (fr > r&& arr[r - 1][c] == 0) r--;
			else if (fr < r && arr[r + 1][c] == 0) r++;
		}
		else {
			if (fc > c&& arr[r][c + 1] == 0) c++;
			else if (fc < c && arr[r][c - 1] == 0) c--;
			else if (fr > r&& arr[r + 1][c] == 0) r++;
			else if (fr < r && arr[r - 1][c] == 0) r--;

			else if (fr > r&& arr[r - 1][c] == 0) r--;
			else if (fr < r && arr[r + 1][c] == 0) r++;
			else if (fc > c&& arr[r][c - 1] == 0) c--;
			else if (fc < c && arr[r][c + 1] == 0) c++;
			else break;
		}
		count++;
	}

	printf("%d\n", count);
}