#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int room[6][2];

int main() {
	int N, K, s, y;
	freopen("13300.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	cin >> N >> K;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			room[i][j] = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> s >> y;
		y = y - 1;
		room[y][s]++;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			sum += (room[i][j] +K-1) / K;
		}
	}
	cout << sum;
	return 0;
}