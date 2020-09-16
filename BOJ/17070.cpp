#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define	DOWN	0
#define	DIAG	1
#define	RIGHT	2
using namespace std;

FILE* fp;

int map[20][20];

int dR[3] = { 1, 1, 0 };
int dC[3] = { 0, 1, 1 };
int cnt;

bool dirChk(int row, int col, int dir, int prev_dir, int row_len, int col_len) {
	if (row >= row_len || col >= col_len) return false;
	if (row == 0 && col == col_len - 1) return false;
	if (map[row][col]) return false;
	if (row == row_len - 1 && col == 0) return false;
	if (prev_dir == DOWN) { if (dir == RIGHT) return false; }
	else if (prev_dir == RIGHT) { if (dir == DOWN) return false; }
	if (dir == DIAG) { if (map[row - 1][col] || map[row][col - 1]) return false; }
	return true;
}

void DFS(int row, int col, int prev_dir, int row_len, int col_len) {
	if (row == row_len - 1 && col == col_len - 1) {
		cnt++;
		return;
	}
	for (int i = 0; i < 3; ++i) {
		int new_row = row + dR[i], new_col = col + dC[i];
		if (dirChk(new_row, new_col, i, prev_dir, row_len, col_len)) {
			DFS(new_row, new_col, i, row_len, col_len);
		}
	}
}

void solve(int row, int col, int row_len, int col_len) {
	for (int i = 0; i < 3; ++i) {
		
		int tmp_row = row + dR[i], tmp_col = col + dC[i];
		if (row == 0 && col == 0) {
			if (i == 2) DFS(tmp_row, tmp_col, i, row_len, col_len);
		}
		else DFS(tmp_row, tmp_col, i, row_len, col_len);
	}
}


int main() {
	int test_case, N, M;
	fp = freopen("17070.txt", "r", stdin);
	cin >> test_case;
	for (int tc = 1; tc <= test_case; ++tc) {
		cin >> N;
		for (int i = 0; i < N;i++)
			for (int j = 0; j < N; j++)
				cin >> map[i][j];
		cnt = 0;
		solve(0, 0, N, N);

		cout << "#" << tc << " " << cnt << endl;
	}

	return 0;

}