#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void swap(int *arr, int n1, int n2) {
	int tmp = arr[n1];
	arr[n1] = arr[n2];
	arr[n2] = tmp;
}

int main() {
	freopen("10813.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);

	int N, M;
	int num_arr[101];
	cin >> N >> M;
	for (int i = 0; i <= N; i++)
		num_arr[i] = i;

	int swap_n1, swap_n2;
	for (int i = 0; i < M; i++) {
		cin >> swap_n1 >> swap_n2;
		swap(num_arr, swap_n1, swap_n2);
	}

	for (int i = 1; i <= N; i++)
		cout << num_arr[i] << ' ';
	cout << '\n';
	return 0;
}