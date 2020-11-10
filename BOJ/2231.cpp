#include <iostream>

using namespace std;

int dat[1000001];
int main() {
	int N, sum, k;
	cin >> N;
	for (int n = 1; n <= N; n++) {
		sum = 0;
		k = n;
		if (!dat[n]) dat[n] = 1;
		if (k / 10) sum += k;
		while (1) {
			sum += k % 10;
			if (!(k / 10)) break;
			k /= 10;
		}
		if (!dat[sum]) dat[sum] = n;
	}
	if (dat[N] == 1) cout << 0;
	else cout << dat[N];
	return 0;
}