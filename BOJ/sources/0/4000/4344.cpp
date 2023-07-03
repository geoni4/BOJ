#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int test_case, n, sum, score, cnt;
	float avr, perc;
	int score_arr[1000];
	freopen("4344.txt", "r", stdin);
	cin >> test_case;
	cout.precision(3);
	cout << fixed;
	for (int tc = 1; tc <= test_case; ++tc) {
		cin >> n;
		sum = 0;
		cnt = 0;
		for (int i = 0; i < n; ++i) {
			cin >> score;
			score_arr[i] = score;
			sum += score;
		}
		avr = (float)sum / (float)n;
		for (int i = 0; i < n; ++i) {
			if (score_arr[i] > avr) cnt++;
		}
		perc = (float)cnt / (float)n * 100.0;
		cout << perc << "%" << "\n";
	}

	return 0;

}