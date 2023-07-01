#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//
//using namespace std;
//
//
//void sw_change(int arr[], int i) {
//	arr[i] = (arr[i] + 1) % 2;
//}
//
//
//int main() {
//	int T, sw[100], N, S, sw_num, start;
//	freopen("1244.txt", "r", stdin);
//	cin.tie(NULL), ios::sync_with_stdio(false);
//	cin >> T;
//	for (int i = 0; i < T; i++)
//		cin >> sw[i];
//
//	cin >> N;
//	for (int n = 0; n < N; ++n) {
//		cin >> S >> sw_num;
//		if (S == 1)	for (int i = sw_num - 1; i < T; i += sw_num)	sw_change(sw, i);
//		else if (S == 2) {
//			start = sw_num - 1;
//			sw_change(sw, start);
//			for (int i = 0; start - i >= 0 && start + i < T; i++) {
//				if (sw[start - i] != sw[start + i]) break;
//				sw_change(sw, start - i);
//				sw_change(sw, start + i);
//			}
//		}
//	}
//	for (int i = 0; i < T; ++i) {
//		cout << sw[i] << " ";
//		if (i % 20 == 19) cout << '\n';
//	}
//	return 0;
//}


#include <iostream>

using namespace std;

void sw_change(int arr[], int i) {
	arr[i] = (arr[i] + 1) % 2;
}

void male_student(int arr[], int m, int num) {
	int i = 1;
	while (1) {
		if (m * i > num) return;
		sw_change(arr, m * i - 1);
		i++;
	}
}

void female_student(int arr[], int f, int num) {
	sw_change(arr, f - 1);
	int ul = f + 1; int ll = f - 1;
	while (1) {
		if (ul > num) return;
		if (ll < 1) return;
		if (arr[ll - 1] != arr[ul - 1]) return;
		sw_change(arr, ll - 1);
		sw_change(arr, ul - 1);
		ul++; ll--;
	}
}

int main() {
	int T, sw[100], N, S, sw_num, start;
	freopen("1244.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> sw[i];
	}
	cin >> N;
	for (int n = 0; n < N; ++n) {
		cin >> S >> sw_num;
		if (S == 1) {
			male_student(sw, sw_num, T);
		}
		else if (S == 2) {
			female_student(sw, sw_num, T);
		}
	}
	for (int i = 0; i < T; ++i) {
		cout << sw[i] << " ";
		if (i % 20 == 19) cout << '\n';
	}
	return 0;
}