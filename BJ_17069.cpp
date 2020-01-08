#include <iostream>
using namespace std;

const int MAX = 32 + 1;

typedef struct
{
	int y, x;
}Dir;

Dir moveDir[3] = { {0, 1}, {1, 0}, {1, 1} };

int N;
int arr[MAX][MAX];
long long cache[MAX][MAX][3];

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	// (0, 1) ���� ���⿡�� ����
	cache[0][1][0] = 1;
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			// ����
			if (arr[y][x + 1] == 0)
			{
				// ���� Ȥ�� �밢��
				cache[y][x + 1][0] += cache[y][x][0] + cache[y][x][2];
			}

			// ����
			if (arr[y + 1][x] == 0)
			{
				// ���� Ȥ�� �밢��
				cache[y + 1][x][1] += cache[y][x][1] + cache[y][x][2];
			}

			// �밢��
			if (arr[y + 1][x] == 0 && arr[y][x + 1] == 0 && arr[y + 1][x + 1] == 0)
			{
				// ��� ���� ����
				cache[y + 1][x + 1][2] += cache[y][x][0] + cache[y][x][1] + cache[y][x][2];
			}
		}
	}

	long long result = 0;
	for (int i = 0; i < 3; i++)
	{
		result += cache[N - 1][N - 1][i];
	}

	cout << result << "\n";
	return 0;
}