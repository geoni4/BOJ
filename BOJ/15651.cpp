#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int num_arr[10];


void rpermu(int n, int k, int r) {
	if (k == r) {
		for (int i = 0; i < r; i++)
			cout << num_arr[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		num_arr[k] = i;
		rpermu(n, k + 1, r);
	}
}

int main() {
	int n, r;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n >> r;
	rpermu(n, 0, r);
	return 0;
}