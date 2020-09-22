#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int dir[][2] = { {0, 1},{1, 0}, {0, -1}, {-1, 0} };
bool map[1000][1000];

bool isValid(int x, int y, int row, int col) {
	if (x >= col || x<0 || y>=row || y < 0) return 0;
	if (map[y][x]) return 0;
	return 1;
}

int main() {
	int row, col, K, x=0, y=0;
	int direction = 0;
	freopen("10157.txt", "r", stdin);
	ios::sync_with_stdio(false), cin.tie(NULL);
	cin >> col >> row >> K;
	if (K > col * row) cout << 0;
	else {
		for (int i = 0; i < 1000; i++)
			memset(map[i],false,1000);
		for (int i = 1; i <= row*col; i++) {
			map[y][x] = true;
			if (i == K) break;
			if (isValid(x + dir[direction][0], y + dir[direction][1], row, col)) {
				x += dir[direction][0], y += dir[direction][1];
			} else {
				direction = (direction + 1) % 4;
				i--;
			}
		}
		cout << x + 1 << " " << y + 1;
			
	}
	return 0;
}