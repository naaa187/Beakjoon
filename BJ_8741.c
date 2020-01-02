#include<stdio.h>

int main() {
	int k, i;
	scanf("%d", &k);
	for (i = 0; i < k;i++) printf("1");
	for (i = 0; i < k-1;i++) printf("0");
}