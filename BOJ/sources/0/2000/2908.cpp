#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL), ios::sync_with_stdio(false);
	int num[2], tmp[2] = { 0, 0 }, res;
	freopen("2908.txt", "r", stdin);
	cin >> num[0] >> num[1];
	for (int n = 0; n < 3; n++)
		for (int i = 0; i < 2; i++) {
			tmp[i] = tmp[i] * 10 + num[i] % 10;
			num[i] /= 10;
		}

	res = tmp[0] >= tmp[1] ? tmp[0] : tmp[1];
	cout << res;
	return 0;
}