#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
	int K, ans, dir, dist, max_x[2], max_y[2], dist_arr[6], idx, min_l[2];
	bool chk[6];
	freopen("2477.txt", "r", stdin);
	cin >> K;
	for (int i = 0; i < 6; i++)
		dist_arr[i] = 0, chk[i] = false;
	for (int i = 0; i < 2; i++)
		max_x[i] = 0, max_y[i] = 0, min_l[i] = 0;
	for (int i = 0; i <6; i++) {
		cin >> dir >> dist;
		if (dir == 1 || dir == 2) {
			if (dist >= max_x[1]) {
				max_x[0] = i;
				max_x[1] = dist;
			}
		}
		if (dir == 3 || dir == 4) {
			if (dist >= max_y[1]) {
				max_y[0] = i;
				max_y[1] = dist;
			}
		}
		dist_arr[i] = dist;
	}
	for (int i = 0; i < 3; i++) {
		chk[(max_x[0] +5 + i) % 6] = true;
		chk[(max_y[0] +5 + i) % 6] = true;
	}
	idx = 0;
	for (int i = 0; i < 6; i++) {
		if (chk[i] == 0) min_l[idx++]= dist_arr[i];
	}
	ans = K *(max_x[1] * max_y[1] - min_l[0] * min_l[1]);
	cout << ans;
	return 0;
}