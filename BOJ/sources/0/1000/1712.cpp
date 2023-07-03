#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	freopen("1712.txt", "r", stdin);
	int64_t A, B, C, cnt;
	cin >> A >> B >> C;
	if (B > C) {
		cout << -1;
		return 0;
	}
	cnt = A / (C - B) + 1;
	cout << cnt;
	return 0;
}