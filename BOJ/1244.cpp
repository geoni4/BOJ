#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


void sw_change(int arr[], int i) {
	arr[i] = (arr[i] + 1) % 2;
}


int main() {
	int T, sw[100], N, S, sw_num, start;
	freopen("1244.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	cin >> T;
	for (int i = 0; i < T; i++)
		cin >> sw[i];

	cin >> N;
	for (int n = 0; n < N; ++n) {
		cin >> S >> sw_num;
		if (S == 1)	for (int i = sw_num - 1; i < T; i += sw_num)	sw_change(sw, i);
		else if (S == 2) {
			start = sw_num - 1;
			sw_change(sw, start);
			for (int i = 0; start - i >= 0 && start + i < T; i++) {
				if (sw[start - i] != sw[start + i]) break;
				sw_change(sw, start - i);
				sw_change(sw, start + i);
			}
		}
	}
	for (int i = 0; i < T; ++i) {
		cout << sw[i] << " ";
		if (i % 20 == 19) cout << '\n';
	}
	return 0;
}