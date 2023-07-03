#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N, tmp, cnt;
	cin >> N;
	tmp = N;
	cnt = 0;
	while (1) {
		cnt++;
		tmp = (tmp % 10) * 10 + ((tmp/10) + (tmp % 10)) % 10;
		if (tmp == N) break;
	}
	cout << cnt << endl;
	return 0;
}