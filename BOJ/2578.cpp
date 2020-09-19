#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

bool visited[5][5] = { 0, };

int isBingo() {
	int rcnt, ccnt, bcnt = 0, drcnt, dlcnt;
	for (int i = 0; i < 5; ++i) {
		rcnt = 0, ccnt = 0;
		for (int j = 0; j < 5; ++j) {
			if (visited[i][j]) rcnt++;
			else rcnt = 0;
			if (visited[j][i]) ccnt++;
			else ccnt = 0;
		}
		if (rcnt == 5)	bcnt++;
		if (ccnt == 5)	bcnt++;
	}
	drcnt = 0, dlcnt = 0;
	for (int j = 0; j < 5; ++j) {
		if (visited[j][j])	drcnt++;
		else drcnt = 0;
		if (visited[j][4 - j])	dlcnt++;
		else dlcnt = 0;
	}
	if (drcnt == 5) bcnt++;
	if (dlcnt == 5) bcnt++;

	return bcnt;
}
int main() {
	int row[5][5], b, res;
	freopen("2578.txt", "r", stdin);
	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 5; ++j)
			cin >> row[i][j];

	for (int n = 0; n < 25; ++n) {
		cin >> b;
		for (int i = 0; i < 25; ++i) {
			if (row[i / 5][i % 5] == b) {
				visited[i / 5][i % 5] = 1;
				break;
			}
		}
		if (isBingo() >= 3) {
			res = n + 1;
			break;
		}
		
	}
	cout << res << endl;

	return 0;
}