#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
	int arr[100000], N, up_tmp, dn_tmp, max;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	freopen("2491.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (i == 0) up_tmp = 1, dn_tmp = 1, max = 1;
		else {
			if (arr[i] != arr[i - 1]) {
				if (arr[i] > arr[i - 1]) {
					up_tmp++, dn_tmp = 1;
					if (up_tmp >= max) max = up_tmp;
				}
				if (arr[i] < arr[i - 1]) {
					dn_tmp++, up_tmp = 1;
					if (dn_tmp >= max) max = dn_tmp;
				}
			}
			else {
				up_tmp++, dn_tmp++;
				if (up_tmp >= max) max = up_tmp;
				if (dn_tmp >= max) max = dn_tmp;
			}
		}
	}
	cout << max;
	return 0;
}