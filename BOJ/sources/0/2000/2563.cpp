#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

bool visited[100][100];

int main() {
	int N, row, col, cnt = 0;
	freopen("2563.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			visited[i][j] = false;

	for (int i = 0; i < N; i++) {
		cin >> row >> col;
		for (int i = row; i < row + 10; i++) {
			for (int j = col; j < col + 10; j++) {
				if (visited[i][j]) continue;
				visited[i][j] = true;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}