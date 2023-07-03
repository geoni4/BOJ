#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;
	char ch;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("11720.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ch;
		sum += ch - '0';
	}
	cout << sum;

	return 0;
}