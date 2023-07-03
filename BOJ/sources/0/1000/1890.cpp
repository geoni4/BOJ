#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int map[100][100];
int64_t chk[100][100];
int main() {
	int N;
	freopen("1890.txt", "r", stdin);
	cin >> N;
	chk[0][0] = 1;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (i == N - 1 && j == N - 1) break;
			if (!chk[i][j]) continue;
			int newY = i + map[i][j], newX = j + map[i][j];
			if (newY < N)	chk[newY][j] += chk[i][j];
			if (newX < N)	chk[i][newX] += chk[i][j];
		}
	cout << chk[N - 1][N - 1];
	return 0;
}