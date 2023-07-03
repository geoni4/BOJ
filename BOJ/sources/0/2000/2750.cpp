#include <iostream>

using namespace std;

int main() {
	int N;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> N;
	int* arr = new int[N];
	for (int n = 0; n < N; n++) {
		cin >> arr[n];
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int n = 0; n < N; n++) {
		cout << arr[n] << '\n';
	}
	delete arr;

	return 0;
}