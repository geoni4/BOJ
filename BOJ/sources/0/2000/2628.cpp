#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int col, row, tmpY, tmpX, tmp_area, max_area=0;
	int cnt[2][101];

	freopen("2628.txt", "r", stdin);
	int N;
	cin >> col >> row >> N;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 101; j++)
			cnt[i][j] = 0;

	int idx, len;
	for (int i = 0; i < N; i++) {
		cin >> idx >> len;
		cnt[idx][len] = 1;
	}
	for (int i = 0; i <= col;) {
		tmpX = i;
		i++;
		while (cnt[1][i] == 0 && i<col) i++;
		for (int j = 0; j <= row;) {
			tmpY = j;
			j++;
			while (cnt[0][j] == 0 && j<row) j++;
			tmp_area = (i - tmpX) * (j - tmpY);
			if (max_area < tmp_area) max_area = tmp_area;
		}
	}
	cout << max_area << endl;
	return 0;
}