#include <stdio.h>

int Sosu(int n) {
	int i;
	if (n == 1) return 0; // ���ϰ��� 0�� ��� �Ҽ� �ƴ�, 1�� ��� �Ҽ�
	if (n == 2) return 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0) { // 2�̻� n�̸����� ���������� ������ 0. �� ������ ������.
			return 0;
		}
	}
	return 1; // �Ҽ�. 2�̻� n�̸����� ������ �������� �� ��ã��
}

int main() {
	int T; //�׽�Ʈ ���̽�
	int i;
	int num = 0;
	int x; // �Է¹޴� ����
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d ", &x);
		if (Sosu(x)) {
			num++;
		}
	}
	printf("%d", num);
}