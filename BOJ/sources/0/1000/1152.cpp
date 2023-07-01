#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL), ios::sync_with_stdio(false);
	int cnt =0;
	char str[1000000];
	freopen("1152.txt", "r", stdin);
	while (cin >> str) {
		cnt++;
	}
	cout << cnt;
	return 0;
}