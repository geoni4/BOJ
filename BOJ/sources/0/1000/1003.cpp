#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int cnt[50][2] = { 0 };

int main() {
	int N, test_case;
	freopen("1003.txt", "r", stdin);
	cin >> test_case;
	cnt[0][0] = 1;
	cnt[1][1] = 1;
	for (int i = 2; i <= 50; ++i) {
		cnt[i][0] = cnt[i - 1][0] + cnt[i - 2][0];
		cnt[i][1] = cnt[i - 1][1] + cnt[i - 2][1];
	}
	for (int tc = 1; tc <= test_case; ++tc) {
		cin >> N;
		cout << cnt[N][0] << " " << cnt[N][1] << endl;
	}
	return 0;
}