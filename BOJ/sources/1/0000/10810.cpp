#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("10810.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int N, M;

	cin >> N >> M;

	int basket[101] = { 0 };
	int num, begin, end;
	for (int i = 0; i < M; i++) {

		cin >> begin >> end >> num;
		for (int j = begin; j <= end; j++) {
			basket[j] = num;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << basket[i] << ' ';
	}

	return 0;
}