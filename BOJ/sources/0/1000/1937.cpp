#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int dR[] = { 0, 1, 0, -1 };
int dC[] = { 1, 0, -1, 0 };

int map[500][500], memo[500][500];
int max_cnt;

int dfs(int row, int col,int N) {
	if (memo[row][col] != 0) return memo[row][col];
	memo[row][col] = 1;
	int tmp, tmpR, tmpC;
	for (int n = 0; n < 4; n++) {
		tmpR = row + dR[n], tmpC = col + dC[n];
		if (tmpR < 0 || tmpR >= N || tmpC < 0 || tmpC >= N) continue;
		if (map[tmpR][tmpC] >= map[row][col]) continue;
		tmp = dfs(tmpR, tmpC, N) + 1;
		if (memo[row][col] <= tmp) memo[row][col] = tmp;
		
	}
	if (max_cnt <= memo[row][col]) max_cnt = memo[row][col];
	return memo[row][col];
}


int main() {
	int N;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("1937.txt", "r", stdin);
	cin >> N;
	for (int r = 0; r < N; r++)
		for (int c = 0; c < N; c++) {
			cin >> map[r][c];
			memo[r][c] = 0;
		}

	max_cnt = 1;
	for (int r = 0; r < N; r++)
		for (int c = 0; c < N; c++)
			dfs(r, c, N);

	cout << max_cnt;
	return 0;
}