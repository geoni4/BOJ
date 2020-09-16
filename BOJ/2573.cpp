#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int row, col, top;
typedef int STACK;
STACK arrX[1000001], arrY[1000001];
bool visited[300][300];
int map[300][300], chk_map[300][300];
int cnt[11];

bool move_valid_check(int x, int y) {
	if (x < 0 || x >= row) return false;
	if (y < 0 || y >= col) return false;
	if (!map[x][y]) return false;
	return true;
}

int zero_check(int x, int y) {
	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };
	int zero_cnt = 0;
	for (int i = 0; i < 4;i++) {
		if (!map[x+dx[i]][y+dy[i]])  zero_cnt++;
	}
	return zero_cnt;
}

int DFS() {
	
	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };
	int flag = 0, x = 0, y = 0;
	int move_count = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0; j < col; j++) {
			if (map[i][j]) {
				flag = 1;
				x = i, y = j;
				break;
			}
		}
		if (flag) break;
	}
	arrX[++top] = x, arrY[top] = y;

	while (top != -1) {
		x = arrX[top], y = arrY[top--];
		if (!visited[x][y]) {
			visited[x][y] = 1;
			move_count++;
			for (int i = 0; i < 4; i++) {
				int newX = x + dx[i];
				int newY = y + dy[i];

				if (move_valid_check(newX, newY)) {
					arrX[++top] = newX, arrY[top] = newY;
				}
			}
			
		}
	}
	return move_count;
}


int solve() {
	int move_tmp = 0;
	int num_cnt, year_cnt = 0;;
	while (1) {
		num_cnt = 0;
		year_cnt++;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col;j++)
				if(map[i][j])	chk_map[i][j] = zero_check(i, j);
		for (int i = 0; i < row;i++) {
			for (int j = 0; j < col;j++) {
				if (map[i][j]) {
					cnt[map[i][j]] -= 1;
					if (cnt[map[i][j]] < 0) cnt[map[i][j]] = 0;
					map[i][j] -= chk_map[i][j];
					if (map[i][j] <= 0) map[i][j] = 0;
					else cnt[map[i][j]] += 1;
				}
				visited[i][j] = 0;
			}
		}
		for(int i=0;i<11 ;i++)
			if (cnt[i]) num_cnt += cnt[i];
		if (num_cnt > DFS()) return year_cnt;
		if (!num_cnt) return 0;
	}
	
}


int main() {
	freopen("2573.txt", "r", stdin);
	cin >> row >> col;
	for (int i = 0; i < 11; i++) cnt[i] = 0;
	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			cin >> map[i][j];
			if (map[i][j]) cnt[map[i][j]] += 1;
			chk_map[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	top = -1;
	cout << solve() << endl;

	return 0;
}
