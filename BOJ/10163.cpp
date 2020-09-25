#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int map[101][101];


int main() {
	int x, y, N, len_x, len_y, cnt[101];
	freopen("10163.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < 101; i++) {
		cnt[i] = 0;
		for (int j = 0; j < 101; j++)
			map[i][j] = 0;
	}

	for (int i = 1; i <= N; i++){
		cin >> x >> y >> len_x >> len_y;
		for (int tmpY = y; tmpY < y+len_y; tmpY++)
			for (int tmpX = x; tmpX < x+len_x; tmpX++)
				map[tmpY][tmpX] = i;
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			cnt[map[i][j]]++;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << cnt[i] << '\n';
	}
	

	return 0;
}