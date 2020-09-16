#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int D, K;
	int first[31] = { 0, 1, 0 }, second[31] = { 0, 0, 1 };

	cin >> D >> K;
	for (int i = 3; i <= D; i++) {
		first[i] = first[i - 1] + first[i - 2];
		second[i] = second[i - 1] + second[i - 2];
	}
	for (int i = 1; i <= 100000;i++) {
		for (int j = 1; j <= 100000; j++) {
			if (K == (first[D] * i + second[D]* j)) {
				cout << i << endl << j;
				return 0;
			}
			else if (K < (first[D] * i + second[D] * j)) {
				break;
			}
		}
	}
	return 0;
}