#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int back_plane(int n) {
	int ret;
	if (n == 0) ret = 5;
	if (n == 1) ret = 3;
	if (n == 2) ret = 4;
	if (n == 3) ret = 1;
	if (n == 4) ret = 2;
	if (n == 5) ret = 0;
	return ret;
}


int main() {
	int N, num, sum, max_sum =0, m;
	int dice[10000][6];
	freopen("2116.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; i++) 
		for(int j =0; j<6;j++)
			cin >> dice[i][j];
	for (int j = 0; j < 6; j++) {
		int n = j, m;
		sum = 0;
		for (int i = 0; i < N; i++) {
			m = back_plane(n);
			int max_v = 0;
			for (int k = 0; k < 6; k++) {
				if (k == m || k == n) continue;
				if (max_v <= dice[i][k]) max_v = dice[i][k];
			}
			sum += max_v;
			num = dice[i][m];
			n = 0;
			if (i == N - 1) break;
			while (1) {
				if (dice[i + 1][n] == num) break;
				n++;
			}
		}
		if (max_sum <= sum) max_sum = sum;
	}
	cout << max_sum;
	return 0;
}