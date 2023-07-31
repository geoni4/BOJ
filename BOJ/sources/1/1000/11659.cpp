#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/1/1000/11659.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N, M;
	for (int m = 0; m < M; m++) {
		int* map = new int[N+1];
		for (int i = 1; i <= N; i++) {
			cin >> map[i];
			if (i == 1) continue;
			map[i] += map[i - 1];
		}
		for (int i = 0; i < M; i++) {

		}
	}

	return 0;
}