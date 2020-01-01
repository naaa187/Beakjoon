#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
	int i, j, num;
	int score[100000];
	int stf[100000];

	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < num; i++) {
		stf[i] = 0;
	}
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			if (i > j&& score[i] < score[j]) stf[i]++;
			else if (i < j && score[i] > score[j]) stf[i]--;
		}
		printf("%d\n", stf[i]);
	}
}