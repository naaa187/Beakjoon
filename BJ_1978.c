#include <stdio.h>

int Sosu(int n) {
	int i;
	if (n == 1) return 0; // 리턴값이 0인 경우 소수 아님, 1인 경우 소수
	if (n == 2) return 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0) { // 2이상 n미만으로 나누었을때 나머지 0. 즉 나누어 떨어짐.
			return 0;
		}
	}
	return 1; // 소수. 2이상 n미만으로 나누어 떨어지는 수 못찾음
}

int main() {
	int T; //테스트 케이스
	int i;
	int num = 0;
	int x; // 입력받는 숫자
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d ", &x);
		if (Sosu(x)) {
			num++;
		}
	}
	printf("%d", num);
}