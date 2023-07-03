#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int N, quotient, remainder, res;
	cin >> N;
	quotient = N / 5;
	remainder = N % 5;
	res = quotient;
	if (remainder == 1) {
		res += 1;
		if (quotient - 1 < 0) res = -1;
	}
	else if (remainder == 2) {
		res += 2;
		if (quotient - 2 < 0) res = -1;
	}
	else if (remainder == 3) {
		res += 1;
	}
	else if (remainder == 4) {
		res += 2;
		if (quotient - 1 < 0) res = -1;
	}
	cout << res;
	return 0;
}