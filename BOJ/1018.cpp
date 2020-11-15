#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MIN(A, B) (A) <= (B) ? (A) : (B)
using namespace std;
char map[50][50];
char BW[][9] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
char WB[][9] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
int max_cnt = 987654321;
void solve(int i, int j) {
	int cnt_b = 0, cnt_w = 0;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (max_cnt <= cnt_b && max_cnt <= cnt_w) return;
			if (map[i + y][j + x] != BW[y][x]) cnt_b++;
			if (map[i + y][j + x] != WB[y][x]) cnt_w++;
		}
	}
	max_cnt = MIN(max_cnt, MIN(cnt_b, cnt_w));
}

int main() {
	int N, M;
	freopen("1018.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];

	for (int i = 0; i <= N-8; i++)
		for (int j = 0; j <= M-8; j++)
			solve(i, j);

	cout << max_cnt;
	return 0;
}