#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define INF 300000

using namespace std;

int main() {
	freopen("1507.txt", "r", stdin);
	int N, res=0;
	int map[20][20], memo[20][20];
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			memo[i][j] = map[i][j];
		}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			for (int k = 0; k < N; k++) {
				if (i == k || j == k) continue;
				memo[i][k] = (memo[i][j] + memo[j][k] >= memo[i][k]) ? memo[i][k] : memo[i][j] + memo[j][k];
			}
			if (map[i][j] != memo[i][j]) {
				cout << -1;
				return 0;
			}
		}
	}

	for (int y = 0; y < N; y++) {
		for (int x = y + 1; x < N; x++) {
			int tmp = memo[y][x];
			res += tmp;
			memo[y][x] = INF;
			for (int i = 0; i < N; i++) {
				if (i == x || i == y) continue;
				if (tmp == memo[y][i] + memo[i][x]) {
					res -= tmp;
					break;
				}
			}
			memo[y][x] = tmp;
		}
	}
	cout << res;
	return 0;
}