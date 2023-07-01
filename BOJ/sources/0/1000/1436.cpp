#include <iostream>

using namespace std;

int main() {
	int N, n=0;
	cin >> N;
	for (int i = 0; i < N;) {
		int tmp = n, cnt = 0;
		while (1) {
			if (tmp % 10 == 0 && tmp / 10 == 0) break;
			if (tmp % 10 == 6) cnt++;
			else cnt = 0;
			if (cnt == 3) {
				i++;
				break;
			}
			
			tmp /= 10;
		}
		n++;
	}
	cout << n - 1<<'\n';
	return 0;
}