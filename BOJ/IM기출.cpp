#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int map[100][100];

typedef struct _COORD {
	int x, y;
} COORD;


bool isValid(int x, int y, int col, int row, int v) {
	if (x < 0 || x >= col || y < 0 || y >= row) return 0;
	if (map[x][y] != v) return 0;
	return 1;
}


void check_count(int x, int y, int v, int *cnt) {
	int dx[] = { 1, 0, -1, -1, -1, 0, 1, 1 };
	int dy[] = { 1, 1, 1, 0, -1, -1, -1, 0 };
	for (int i = 0; i < 8; i++) {
		COORD tmp = { x, y };
		while (1) {
			if (isValid(tmp.x + dx[i], tmp.y + dy[i], 100, 100, v)) {
				cnt[i % 4]++;
				tmp.x += dx[i], tmp.y += dy[i];
			}
			else break;
		}
	}
}


int main() {
	int N, cnt[4];
	COORD player[2];
	freopen("IM±âÃâ.txt", "r", stdin);
	cin >> N;
	for (int i= 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			map[i][j] = 0;
		}
	}
	for (int n = 1; n <= N; n++) {
		for (int j = 0; j < 2; j++) {
			cin >> player[j].x >> player[j].y;
			map[player[j].x][player[j].y] = j+1;
			for (int i = 0; i < 4; i++) {
				cnt[i] = 0;
			}
			check_count(player[j].x, player[j].y, j+1, cnt);
			for (int i = 0; i < 4; i++)
				if (cnt[i] == 4) {
					printf("%d\n%d",j+1, n);
					return 0;
				}
		}
	}
	printf("draw");
	return 0;
}