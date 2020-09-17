#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	freopen("10871.txt", "r", stdin);
	int N, X, tmp;
	cin >> N >> X;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		if (tmp < X) cout << tmp << " ";
	}
	return 0;
}