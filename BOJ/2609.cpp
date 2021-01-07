#include <iostream>

using namespace std;
int map[10001][2];

int main() {
	int on, tw;
	cin >> on >> tw;
	int tmp = on;
	for (int i = 2; i < on; ) {
		if (tmp == 1) break;
		if (tmp % i == 0) {
			map[i][0]++;
			tmp /= i;
		}
		else i++;
	}

	return 0;
}