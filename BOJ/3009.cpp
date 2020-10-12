#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int x[2][2] = { 0 }, y[2][2] = { 0 }, tmpX, tmpY, chkX = -1, chkY = -1;
	int res[2] = { 0 };
	freopen("3009.txt", "r", stdin);
	for (int i = 0; i < 3; i++) {
		cin >> tmpX >> tmpY;
		if (i != 0) {
			int j;
			for (j = 0; j <= chkX; j++) {
				if (x[j][0] == tmpX) {
					x[j][1]++; break;
				}
			}
			if (j > chkX) x[++chkX][0] = tmpX, x[chkX][1]++;
			for (j = 0; j <= chkY; j++) {
				if (y[j][0] == tmpY) {
					y[j][1]++; break;
				}
			}
			if (j > chkY) y[++chkY][0] = tmpY, y[chkY][1]++;
		}
		else {
			x[++chkX][0] = tmpX, x[chkX][1]++;
			y[++chkY][0] = tmpY, y[chkY][1]++;
		}
		
	}
	for (int i = 0; i < 2; i++) {
		if (x[i][1] == 1) res[0] = x[i][0];
		if (y[i][1] == 1) res[1] = y[i][0];
	}
	cout << res[0] << " " << res[1];
	return 0;
}